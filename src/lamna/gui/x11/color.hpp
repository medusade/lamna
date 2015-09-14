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
///   File: color.hpp
///
/// Author: $author$
///   Date: 9/13/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GUI_X11_COLOR_HPP
#define _LAMNA_GUI_X11_COLOR_HPP

#include "lamna/gui/x11/xcolor.hpp"
#include "lamna/gui/x11/created.hpp"

namespace lamna {
namespace gui {
namespace x11 {

typedef xos::base::creatort<implement_base> color_creator;
typedef attachert<XPixel, int, 0, XDisplay, color_creator> color_attacher;
typedef attachedt<XPixel, int, 0, XDisplay, color_attacher> color_attached;
typedef createdt<XPixel, int, 0, XDisplay, color_attacher, color_attached> color_created;
typedef color_attacher color_implements;
typedef color_created color_extends;
///////////////////////////////////////////////////////////////////////
///  Class: colort
///////////////////////////////////////////////////////////////////////
template
<class TImplements = color_implements, class TExtends = color_extends>

class _EXPORT_CLASS colort: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    colort
    (XDisplay* display = 0, XPixel detached = None, bool is_created = false)
    : Extends(display, detached, is_created) {
    }
    virtual ~colort() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool attach_black_of_screen(XDisplay& display, XScreen& screen) {
        if ((this->destroyed())) {
            XPixel detached = XBlackPixelOfScreen(&screen);
            this->attach(&display, detached);
            return true;
        }
        return false;
    }
    virtual bool attach_white_of_screen(XDisplay& display, XScreen& screen) {
        if ((this->destroyed())) {
            XPixel detached = XWhitePixelOfScreen(&screen);
            this->attach(&display, detached);
            return true;
        }
        return false;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef colort<> color;

} // namespace x11 
} // namespace gui 
} // namespace lamna 

#endif // _LAMNA_GUI_X11_COLOR_HPP 
