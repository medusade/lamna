########################################################################
# Copyright (c) 1988-2015 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: glhello.pri
#
# Author: $author$
#   Date: 6/20/2015
########################################################################

glhello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

glhello_DEFINES += \
$${lamna_DEFINES} \

########################################################################
glhello_HEADERS += \
$${LAMNA_SRC}/lamna/gui/gtk/application/window_main.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/main.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/main_signals.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/window.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/main.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/drawing_area.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget_signals.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/gtk.hpp \

glhello_SOURCES += \
$${LAMNA_SRC}/lamna/gui/gtk/application/window_main.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/main_signals.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/window.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/drawing_area.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget_signals.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/gtk.cpp \

########################################################################
glhello_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/color.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/object.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/image.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/context.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/pixel.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/cairo/context.hpp \
$${LAMNA_SRC}/lamna/gui/cairo/context.hpp \
$${LAMNA_SRC}/lamna/gui/cairo/pattern.hpp \
$${LAMNA_SRC}/lamna/gui/cairo/cairo.hpp \

glhello_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/color.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/object.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/image.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/cairo/context.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/pixel.cpp \
$${LAMNA_SRC}/lamna/gui/cairo/pattern.cpp \
$${LAMNA_SRC}/lamna/gui/cairo/cairo.cpp \

########################################################################
glhello_HEADERS += \
$${LAMNA_SRC}/lamna/app/gui/gtk/hello/main.hpp \
$${LAMNA_SRC}/lamna/app/gui/hello/main.hpp \
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \

glhello_SOURCES += \
$${LAMNA_SRC}/lamna/app/gui/gtk/hello/main.cpp \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

########################################################################
glhello_LIBS += \
$${lamna_LIBS} \

