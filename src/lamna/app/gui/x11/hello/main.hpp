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
///   File: main.hpp
///
/// Author: $author$
///   Date: 9/8/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_APP_GUI_X11_HELLO_MAIN_HPP
#define _LAMNA_APP_GUI_X11_HELLO_MAIN_HPP

#include "lamna/app/gui/hello/main.hpp"
#include "lamna/gui/x11/window_main.hpp"
#include "lamna/gui/x11/main_window.hpp"
#include "lamna/gui/x11/window.hpp"
#include "lamna/gui/x11/main.hpp"
#include "lamna/gui/main.hpp"

namespace lamna {
namespace app {
namespace gui {
namespace x11 {
namespace hello {

typedef lamna::gui::x11::main_window_implements main_window_implements;
typedef gui::hello::surfacet
<lamna::gui::x11::main_window> main_window_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main_window
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main_window
: virtual public main_window_implements, public main_window_extends {
public:
    typedef main_window_implements Implements;
    typedef main_window_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main_window() {
    }
    virtual ~main_window() {
    }
protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool on_ButtonRelease_XEvent(const XEvent& event) {
        bool isHandled = false;
        unsigned int button = event.xbutton.button;
        LAMNA_LOG_MESSAGE_DEBUG("ButtonRelease button = " << button << "...");
        isHandled = on_XEvent_default(event);
        return isHandled;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

typedef lamna::gui::x11::window_main_implements main_implements;
typedef gui::hello::maint<lamna::gui::x11::window_main> main_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main: virtual public main_implements,public main_extends {
public:
    typedef main_implements Implements;
    typedef main_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main() {
        this->main_window_width_ = LAMNA_APP_GUI_HELLO_WIDTH;
        this->main_window_height_ = LAMNA_APP_GUI_HELLO_HEIGHT;
    }
    virtual ~main() {
    }
protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual lamna::gui::x11::main_window& main_window_created() const {
        return ((lamna::gui::x11::main_window&)main_window_);
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    main_window main_window_;
};

} // namespace hello 
} // namespace x11 
} // namespace gui 
} // namespace app 
} // namespace lamna 

#endif // _LAMNA_APP_GUI_X11_HELLO_MAIN_HPP 
