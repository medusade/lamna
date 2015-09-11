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
///   Date: 6/20/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GUI_GTK_APPLICATION_MAIN_HPP
#define _LAMNA_GUI_GTK_APPLICATION_MAIN_HPP

#include "lamna/gui/gtk/application/main_signals.hpp"
#include "lamna/gui/gtk/main.hpp"

#define LAMNA_GUI_GTK_APPLICATION_FLAGS G_APPLICATION_FLAGS_NONE
#define LAMNA_GUI_GTK_APPLICATION_ID "lamna.gui.gtk.application"

namespace lamna {
namespace gui {
namespace gtk {
namespace application {

typedef GtkApplication* main_attached_t;
typedef gtk::main main_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main_implements
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main_implements
: virtual public main_signals, virtual public gtk::main_implements {
public:
    typedef main_signals SignalsImplements;
    typedef gtk::main_implements MainImplements;
};
///////////////////////////////////////////////////////////////////////
///  Class: maint
///////////////////////////////////////////////////////////////////////
template
<class TImplements = main_implements, class TExtends = main_extends>

class _EXPORT_CLASS maint
: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    maint()
    : application_id_(LAMNA_GUI_GTK_APPLICATION_ID),
      application_flags_(LAMNA_GUI_GTK_APPLICATION_FLAGS),
      application_(0) {
    }
    virtual ~maint() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int gui_main(int argc, char_t** argv, char_t** env) {
        int err = 1;
        int application_argc = 0;
        char** application_argv = 0;
        const gchar* application_id = application_id_.chars();
        GApplicationFlags application_flags =  application_flags_;
        GtkApplication* application = 0;

        if (!(err = before_create_application
             (application_id, application_flags, argc,argv,env))) {
            if (!(err = after_create_application
                 (application, application_id, application_flags, argc,argv,env))) {
                if ((application = create_application
                     (application_id, application_flags, argc,argv,env))) {
                    int err2 = 0;
                    application_ = application;
                    if ((connect_signal_activate())) {
                        LAMNA_LOG_MESSAGE_DEBUG("gtk_application_run()...");
                        if ((err = g_application_run
                             (G_APPLICATION(application), application_argc, application_argv))) {
                            LAMNA_LOG_ERROR("failed " << err << " on g_application_run()");
                        } else {
                            LAMNA_LOG_MESSAGE_DEBUG("...gtk_application_run()");
                        }
                    } else {
                        LAMNA_LOG_ERROR("failed on connect_signal_activate()");
                    }
                    application_ = 0;
                    if ((err2 = destroy_application
                        (application, application_id, application_flags, argc,argv,env))) {
                        LAMNA_LOG_ERROR("failed on destroy_application()");
                        if (!(err)) err = err2;
                    }
                }
            } else {
                LAMNA_LOG_ERROR("failed on after_create_application()");
            }
        } else {
            LAMNA_LOG_ERROR("failed on before_create_application()");
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int before_create_application
    (const gchar* application_id, GApplicationFlags application_flags,
     int argc, char_t** argv, char_t** env) {
        return 0;
    }
    virtual int after_create_application
    (GtkApplication* application,
     const gchar* application_id, GApplicationFlags application_flags,
     int argc, char_t** argv, char_t** env) {
        return 0;
    }
    virtual int destroy_application
    (GtkApplication* application,
     const gchar* application_id, GApplicationFlags application_flags,
     int argc, char_t** argv, char_t** env) {
        if ((application)) {
            LAMNA_LOG_MESSAGE_DEBUG("g_object_unref()...");
            g_object_unref(application);
            LAMNA_LOG_MESSAGE_DEBUG("...g_object_unref()");
            return 0;
        }
        return 1;
    }
    virtual GtkApplication* create_application
    (const gchar* application_id, GApplicationFlags application_flags,
     int argc, char_t** argv, char_t** env) {
        GtkApplication* application = 0;
        LAMNA_LOG_MESSAGE_DEBUG("gtk_application_new()...");
        if ((application = gtk_application_new(application_id, application_flags))) {
            LAMNA_LOG_MESSAGE_DEBUG("...gtk_application_new()");
        } else {
            LAMNA_LOG_ERROR("failed on gtk_application_new()");
        }
        return application;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool connect_signal_activate() {
        const char* signal_name = "activate";
        main_attached_t detached = application_;
        if ((detached)) {
            gulong handler_id = 0;
            if ((handler_id = g_signal_connect
                 (detached, signal_name,
                  G_CALLBACK(main_signals::signal_activate_callback),
                  G_POINTER((main_signals*)this)))) {
                return true;
            } else {
                LAMNA_LOG_ERROR("failed on g_signal_connect(..., \"" << signal_name << "\")");
            }
        }
        return false;
    }
    virtual bool disconnect_signal_activate() {
        main_attached_t detached = application_;
        if ((detached)) {
            guint handlers = 0;
            if ((handlers = g_signal_handlers_disconnect_by_func
                 (detached,
                  G_POINTER(main_signals::signal_activate_callback),
                  G_POINTER((main_signals*)this)))) {
                return true;
            } else {
                LAMNA_LOG_ERROR("failed on g_signal_handlers_disconnect_by_func()");
            }
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    string application_id_;
    GApplicationFlags application_flags_;
    GtkApplication* application_;
};
typedef maint<> main;

} // namespace application 
} // namespace gtk 
} // namespace gui 
} // namespace lamna 

#endif // _LAMNA_GUI_GTK_APPLICATION_MAIN_HPP 
