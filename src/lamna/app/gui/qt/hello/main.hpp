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
#include "lamna/graphic/surface/qt/color.hpp"
#include "lamna/graphic/surface/qt/image.hpp"
#include "lamna/graphic/surface/qt/context.hpp"
#include "lamna/graphic/surface/qt/pixel.hpp"
#include "lamna/graphic/surface/color.hpp"
#include "lamna/graphic/surface/context.hpp"
#include "lamna/graphic/surface/image.hpp"

#define LAMNA_APP_GUI_HELLO_FG_COLOR_RED   0
#define LAMNA_APP_GUI_HELLO_FG_COLOR_GREEN 0
#define LAMNA_APP_GUI_HELLO_FG_COLOR_BLUE  255

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
    typedef main Derives;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main()
    : fg_color_red_(LAMNA_APP_GUI_HELLO_FG_COLOR_RED),
      fg_color_green_(LAMNA_APP_GUI_HELLO_FG_COLOR_GREEN),
      fg_color_blue_(LAMNA_APP_GUI_HELLO_FG_COLOR_BLUE) {
    }
    virtual ~main() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    class MainWindow: public QMainWindow {
    public:
        typedef QMainWindow Extends;
        typedef MainWindow Derives;
        MainWindow
        (int fg_color_red, int fg_color_green, int fg_color_blue)
        : fg_color_red_(fg_color_red),
          fg_color_green_(fg_color_green),
          fg_color_blue_(fg_color_blue),
          paint_(0) {}
    protected:
        typedef void (Derives::*paint_t)
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r);
        ///////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////
        virtual void on_mouse_release_event(const lamna::gui::mouse::event& e) {
            LAMNA_LOG_MESSAGE_DEBUG("on_mouse_release_event() in...");
            if ((paint_ == &Derives::paint_FillEllipse)) {
                paint_ = &Derives::paint_DrawEllipse;
            } else if ((paint_ == &Derives::paint_DrawEllipse)) {
                    paint_ = &Derives::paint_HollowEllipse;
            } else if ((paint_ == &Derives::paint_HollowEllipse)) {
                    paint_ = &Derives::paint_FillCircle;
            } else if ((paint_ == &Derives::paint_FillCircle)) {
                    paint_ = &Derives::paint_DrawCircle;
            } else if ((paint_ == &Derives::paint_DrawCircle)) {
                    paint_ = &Derives::paint_HollowCircle;
            } else if ((paint_ == &Derives::paint_HollowCircle)) {
                    paint_ = &Derives::paint_FillTriangle;
            } else if ((paint_ == &Derives::paint_FillTriangle)) {
                    paint_ = &Derives::paint_Draw;
            } else {
                paint_ = &Derives::paint_FillEllipse;
            }
            this->update();
            LAMNA_LOG_MESSAGE_DEBUG("on_mouse_release_event() ...out");
        }
        ///////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////
        virtual void mouseReleaseEvent(QMouseEvent *event) {
            lamna::gui::mouse::position p(event->x(), event->y());
            Qt::MouseButton button = Qt::NoButton;
            switch((button = event->button())) {
            case Qt::LeftButton:
                {
                lamna::gui::mouse::button b(lamna::gui::mouse::button_left);
                lamna::gui::mouse::event e(lamna::gui::mouse::event_button_release, b, p);
                this->on_mouse_release_event(e);
                break;
                }
            case Qt::RightButton:
                {
                lamna::gui::mouse::button b(lamna::gui::mouse::button_right);
                lamna::gui::mouse::event e(lamna::gui::mouse::event_button_release, b, p);
                this->on_mouse_release_event(e);
                break;
                }
            case Qt::MiddleButton:
                {
                lamna::gui::mouse::button b(lamna::gui::mouse::button_middle);
                lamna::gui::mouse::event e(lamna::gui::mouse::event_button_release, b, p);
                this->on_mouse_release_event(e);
                break;
                }
            }
            Extends::mouseReleaseEvent(event);
        }
        void paintEvent(QPaintEvent* event) {
            QMainWindow* qMainWindow = this;
            int width = qMainWindow->width(), height = qMainWindow->height(), x = 0, y = 0;
            if ((2 <= (x = width/2)) && (2 <= (y = height/2))) {
                graphic::surface::qt::context gc(qMainWindow);
                graphic::surface::qt::image im(gc);
                graphic::surface::qt::color px(im, fg_color_red_, fg_color_green_, fg_color_blue_);
                im.SelectImage(&px);
                paint(im, x,y, x,y);
            }
        }
        void paint
        (graphic::surface::qt::image& im, int x, int y, int w, int h) {
            int r = (x > y)?(y):(x);
            if ((paint_)) {
                (this->*paint_)(im, x,y, w,h, r);
            }
        }
        void paint_FillEllipse
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.FillEllipse(x,y, x,y);
        }
        void paint_DrawEllipse
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.DrawEllipse(x,y, x,y);
        }
        void paint_HollowEllipse
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.HollowEllipse(x,y, x,y);
        }
        void paint_FillCircle
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.FillCircle(x,y, r);
        }
        void paint_DrawCircle
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.DrawCircle(x,y, r);
        }
        void paint_HollowCircle
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.HollowCircle(x,y, r);
        }
        void paint_FillTriangle
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.FillTriangle(x,y-h,x+w,y+h,x-w,y+h);
        }
        void paint_Draw
        (graphic::surface::qt::image& im, int x, int y, int w, int h, int r) {
            im.Draw(0,0, x+w,y+h);
            im.Draw(0,y+h, x+w,0);
        }
        int fg_color_red_, fg_color_green_, fg_color_blue_;
        paint_t paint_;
    };
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual QMainWindow* create_main_window
    (QApplication& qApplication, int argc, char_t** argv, char_t** env) {
        return new MainWindow(fg_color_red_, fg_color_green_, fg_color_blue_);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    int fg_color_red_, fg_color_green_, fg_color_blue_;
};

} // namespace hello
} // namespace qt 
} // namespace gui 
} // namespace app 
} // namespace lamna 

#endif // _LAMNA_APP_GUI_QT_HELLO_MAIN_HPP 
