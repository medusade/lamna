///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2015 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: window.hpp
///
/// Author: $author$
///   Date: 9/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GUI_X11_WINDOW_HPP
#define _LAMNA_GUI_X11_WINDOW_HPP

#include "lamna/gui/x11/event_target.hpp"
#include "lamna/gui/x11/event.hpp"
#include "lamna/gui/x11/created.hpp"
#include "lamna/gui/x11/attached.hpp"
#include "lamna/gui/x11/attacher.hpp"

#define LAMNA_GUI_X11_WINDOW_DEFAULT_XEVENT_MASK \
   ExposureMask|ColormapChangeMask|PropertyChangeMask|VisibilityChangeMask|\
   KeymapStateMask|EnterWindowMask|LeaveWindowMask|FocusChangeMask|\
   KeyPressMask|KeyReleaseMask|ButtonPressMask|ButtonReleaseMask|\
   PointerMotionMask|StructureNotifyMask|SubstructureNotifyMask|\
   SubstructureRedirectMask

#define LAMNA_GUI_X11_WINDOW_DEFAULT_XEVENT_GRAB_MASK \
   ButtonPressMask|ButtonReleaseMask|\
   PointerMotionMask|EnterWindowMask|LeaveWindowMask

namespace lamna {
namespace gui {
namespace x11 {

typedef xos::base::creatort<implement_base> window_creator;
typedef attachert<XWindow, int, None, XDisplay, window_creator> window_attacher;
typedef attachedt<XWindow, int, None, XDisplay, window_attacher> window_attached;
typedef createdt<XWindow, int, None, XDisplay, window_attacher, window_attached> window_created;
typedef window_attacher window_implements;
typedef window_created window_extends;
///////////////////////////////////////////////////////////////////////
///  Class: windowt
///////////////////////////////////////////////////////////////////////
template
<class TEventTargetImplements = event_target,
 class TImplements = window_implements, class TExtends = window_extends>

class _EXPORT_CLASS windowt: virtual public TImplements, public TExtends {
public:
    typedef TEventTargetImplements EventTargetImplements;
    typedef TImplements Implements;
    typedef TExtends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    windowt
    (XDisplay* display = 0, XWindow detached = None, bool is_created = false)
    : Extends(display, detached, is_created) {
    }
    virtual ~windowt() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool select_input() {
        XEventMask event_mask = default_XEventMask();
        return select_input(event_mask);
    }
    virtual bool select_input(XEventMask event_mask) {
        XDisplay* display = 0;
        XWindow detached = None;
        if ((display = this->display()) && (None != (detached = this->attached_to()))) {
            XSelectInput(display, detached, event_mask);
            return true;
        }
        return false;
    }
    static XEventMask default_XEventMask() {
        static XEventMask event_mask = LAMNA_GUI_X11_WINDOW_DEFAULT_XEVENT_MASK;
        return event_mask;
    }
    static XEventMask default_grab_XEventMask() {
        static XEventMask event_mask = LAMNA_GUI_X11_WINDOW_DEFAULT_XEVENT_GRAB_MASK;
        return event_mask;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool map() {
        XDisplay* display = 0;
        XWindow detached = None;
        if ((display = this->display()) && (None != (detached = this->attached_to()))) {
            XMapWindow(display, detached);
            return true;
        }
        return false;
    }
    virtual bool unmap() {
        XDisplay* display = 0;
        XWindow detached = None;
        if ((display = this->display()) && (None != (detached = this->attached_to()))) {
            XUnmapWindow(display, detached);
            return true;
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool invalidate(bool erase_background = false) {
        XWindowAttributes window_attributes;
        if ((get_attributes(window_attributes))) {
            LAMNA_LOG_MESSAGE_DEBUG("invalidate(0,0, " << window_attributes.width << "," << window_attributes.height << ")...");
            if ((invalidate(0,0, window_attributes.width, window_attributes.height, erase_background))) {
                LAMNA_LOG_MESSAGE_DEBUG("...invalidate(0,0, " << window_attributes.width << "," << window_attributes.height << ")");
                return true;
            }
        }
        return false;
    }
    virtual bool invalidate
    (int x, int y, int width, int height, bool erase_background = false) {
        XDisplay* display = 0;
        XWindow detached = None;
        if ((display = this->display()) && (None != (detached = this->attached_to()))) {
            if ((erase_background)) {
                XClearArea(display, detached, x,y, width,height, True);
                return true;
            } else {
                Expose_event event(display, detached, x,y, width,height);
                if ((event.send()))
                    return true;
            }
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool change_background(XPixel background) {
        XSetWindowAttributesMask set_window_attributes_mask = CWBackPixel;
        XSetWindowAttributes set_window_attributes;
        set_window_attributes.background_pixel = background;
        if ((change_attributes(set_window_attributes_mask, set_window_attributes))) {
            return true;
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool change_attributes
    (XSetWindowAttributesMask set_window_attributes_mask,
     XSetWindowAttributes& set_window_attributes) {
        XDisplay* display = 0;
        XWindow detached = None;
        if ((display = this->display()) && (None != (detached = this->attached_to()))) {
            XChangeWindowAttributes
            (display, detached, set_window_attributes_mask, &set_window_attributes);
            return true;
        }
        return false;
    }
    virtual bool get_attributes
    (XWindowAttributes& window_attributes) {
        XDisplay* display = 0;
        XWindow detached = None;
        if ((display = this->display()) && (None != (detached = this->attached_to()))) {
            XGetWindowAttributes(display, detached, &window_attributes);
            return true;
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool store_name(const char* name) {
        XDisplay* display = 0;
        XWindow detached = None;
        if ((name) && (display = this->display()) && (None != (detached = this->attached_to()))) {
            XStoreName(display, detached, name);
            return true;
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool create
    (XDisplay& display, XWindow parent_window,
     int x, int y, unsigned int width, unsigned int height,
     unsigned int border_width, XPixel border, XPixel background) {
        XWindow detached = None;
        if (None != (detached = create_attached
            (display, parent_window, x,y, width,height,
             border_width, border, background))) {
            this->set_is_created();
            return true;
        }
        return false;
    }
    virtual bool destroy() {
        XDisplay* display = 0;
        XWindow detached = None;
        if (None != (detached = this->detach(display))) {
            if ((display)) {
                if ((this->destroy_detached(*display, detached))) {
                    return true;
                }
            } else {
                LAMNA_LOG_ERROR("unexpected 0 == display");
            }
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual XWindow create_attached
    (XDisplay& display, XWindow parent_window,
     int x, int y, unsigned int width, unsigned int height,
     unsigned int border_width, XPixel border, XPixel background) {
        XWindow detached = None;
        if (None != (detached = create_detached
            (display, parent_window, x,y, width,height,
             border_width, border, background))) {
            this->attach(&display, detached);
            return detached;
        }
        return None;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual XWindow create_detached
    (XDisplay& display, XWindow parent_window,
     int x, int y, unsigned int width, unsigned int height,
     unsigned int border_width, XPixel border, XPixel background) const {
        XWindow detached = None;
        if (!(None != (detached = XCreateSimpleWindow
            (&display, parent_window, x,y, width,height,
             border_width, border, background)))) {
            LAMNA_LOG_ERROR("failed on XCreateSimpleWindow()");
        }
        return detached;
    }
    virtual bool destroy_detached
    (XDisplay& display, XWindow detached) const {
        if (None != (detached)) {
            XDestroyWindow(&display, detached);
            return true;
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef windowt<> window;

} // namespace x11 
} // namespace gui 
} // namespace lamna 

#endif // _LAMNA_GUI_X11_WINDOW_HPP 
