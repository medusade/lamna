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
///   Date: 5/30/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_APP_GUI_QT_HELLO_MAIN_HPP
#define _LAMNA_APP_GUI_QT_HELLO_MAIN_HPP

#include "lamna/gui/qt/application/window_main.hpp"
#include "lamna/graphic/image.hpp"

namespace lamna {
namespace app {
namespace gui {
namespace qt {
namespace hello {

typedef lamna::gui::qt::application::window_main_implements main_implements;
typedef lamna::gui::qt::application::window_main main_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main: virtual public main_implements, public main_extends {
public:
    typedef main_implements Implements;
    typedef main_extends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main() {
    }
    virtual ~main() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool after_show_main_window
    (QMainWindow* qMainWindow, QApplication& qApplication,
     int argc, char_t** argv, char_t** env) {
        int width = qMainWindow->width(), height = qMainWindow->height(), x = 0, y = 0;
        if ((2 <= (x = width/2)) && (2 <= (y = height/2))) {
            graphic::logger_image px;
            graphic::image im(&px);
            im.FillEllipse(x,y, x,y);
        }
        return true;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
};

} // namespace hello
} // namespace qt 
} // namespace gui 
} // namespace app 
} // namespace lamna 

#endif // _LAMNA_APP_GUI_QT_HELLO_MAIN_HPP 
