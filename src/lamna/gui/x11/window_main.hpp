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
///   File: window_main.hpp
///
/// Author: $author$
///   Date: 9/9/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GUI_X11_WINDOW_MAIN_HPP
#define _LAMNA_GUI_X11_WINDOW_MAIN_HPP

#include "lamna/gui/x11/main.hpp"
#include "lamna/gui/x11/main_window.hpp"
#include "lamna/gui/x11/window.hpp"
#include "lamna/gui/x11/event_target.hpp"
#include "lamna/gui/x11/atom.hpp"

namespace lamna {
namespace gui {
namespace x11 {

typedef main_implements window_main_implements;
typedef main window_main_extends;
///////////////////////////////////////////////////////////////////////
///  Class: window_maint
///////////////////////////////////////////////////////////////////////
template
<class TEventTargetImplements = event_target,
 class TImplements = window_main_implements,
 class TExtends = window_main_extends>

class _EXPORT_CLASS window_maint
: virtual public TEventTargetImplements,
  virtual public TImplements, public TExtends {
public:
    typedef TEventTargetImplements EventTargetImplements;
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    window_maint() {
    }
    virtual ~window_maint() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool on_XEvent(const XEvent& event) {
        return EventTargetImplements::on_XEvent(event);
    }
    virtual bool before_on_XEvent(const XEvent& event) {
        return false;
    }
    virtual bool after_on_XEvent(const XEvent& event) {
        return false;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool process_XEvent(XEvent& event, XDisplay& display) {
        bool isHandled = false;
        if (!(isHandled = before_on_XEvent(event))) {
            if (!(isHandled = on_XEvent(event))) {
                isHandled = after_on_XEvent(event);
            }
        }
        return isHandled;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool next_XEvent(XEvent& event, XDisplay& display) {
        XNextEvent(&display, &event);
        return true;
    }
    virtual bool no_next_XEvent(XDisplay& display) {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool peek_XEvent(XEvent& event, XDisplay& display) {
        if (False != (XCheckIfEvent(&display, &event, is_XEvent, (XPointer)(this))))
            return true;
        return false;
    }
    static Bool is_XEvent(XDisplay* display, XEvent* event, XPointer arg) {
        return True;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int event_loop(int argc, char_t** argv, char_t** env) {
        int err = 0;
        XDisplay* display = 0;
        if ((display = this->display())) {
            if (!(this->set_done_event_loop(false))) {
                XEvent event;
                do {
                    LAMNA_LOG_MESSAGE_DEBUG("next_XEvent()...");
                    if ((next_XEvent(event, *display))) {
                        LAMNA_LOG_MESSAGE_DEBUG("...next_XEvent()");
                        process_XEvent(event, *display);
                    } else {
                        LAMNA_LOG_MESSAGE_DEBUG("...no_next_XEvent()");
                        if ((no_next_XEvent(*display))) {
                            break;
                        }
                    }
                } while (this->done_event_loop());
            }
        }
        return err;
    }
    virtual int before_event_loop(int argc, char_t** argv, char_t** env) {
        int err = 1;
        if ((atom_WM_PROTOCOLS_.create
             (*(this->display()), LAMNA_GUI_X11_ATOM_NAME_WM_PROTOCOLS, true))) {
            if ((atom_WM_DELETE_WINDOW_.create
                 (*(this->display()), LAMNA_GUI_X11_ATOM_NAME_WM_DELETE_WINDOW, true))) {
            } else {
                atom_WM_PROTOCOLS_.destroy();
            }
        } else {
        }
        return err;
    }
    virtual int after_event_loop(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(atom_WM_DELETE_WINDOW_.destroy())) {
            err = 1;
        }
        if (!(atom_WM_PROTOCOLS_.destroy())) {
            err = 1;
        }
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    atom atom_WM_PROTOCOLS_;
    atom atom_WM_DELETE_WINDOW_;
};
typedef window_maint<> window_main;

} // namespace x11 
} // namespace gui 
} // namespace lamna 

#endif // _LAMNA_GUI_X11_WINDOW_MAIN_HPP 
