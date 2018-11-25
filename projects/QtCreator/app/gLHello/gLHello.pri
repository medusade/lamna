########################################################################
# Copyright (c) 1988-2018 $organization$
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
#   File: gLHello.pri
#
# Author: $author$
#   Date: 11/24/2018
#
# QtCreator .pri file for lamna executable gLHello
########################################################################

########################################################################
# gLHello

# gLHello TARGET
#
gLHello_TARGET = gLHello

# gLHello INCLUDEPATH
#
gLHello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \
$${lamna_gtk_INCLUDEPATH} \

# gLHello DEFINES
#
gLHello_DEFINES += \
$${lamna_gtk_DEFINES} \
$${lamna_DEFINES} \

########################################################################
# gLHello OBJECTIVE_HEADERS
#
#gLHello_OBJECTIVE_HEADERS += \
#$${LAMNA_SRC}/lamna/base/Base.hh \

# gLHello OBJECTIVE_SOURCES
#
#gLHello_OBJECTIVE_SOURCES += \
#$${LAMNA_SRC}/lamna/base/Base.mm \

########################################################################
# gLHello HEADERS
#
gLHello_HEADERS += \
$${LAMNA_SRC}/lamna/gui/gtk/application/window_main.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/main.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/main_signals.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/window.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/main.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/drawing_area.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget_signals.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/gtk.hpp \
\
$${LAMNA_SRC}/lamna/graphic/surface/cairo/color.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/object.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/image.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/context.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/pixel.hpp \
$${LAMNA_SRC}/lamna/gui/gtk/cairo/context.hpp \
$${LAMNA_SRC}/lamna/gui/cairo/context.hpp \
$${LAMNA_SRC}/lamna/gui/cairo/pattern.hpp \
$${LAMNA_SRC}/lamna/gui/cairo/cairo.hpp \
\
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \
\
$${LAMNA_SRC}/lamna/app/gui/gtk/hello/main.hpp \
$${LAMNA_SRC}/lamna/app/gui/hello/main.hpp \

# gLHello SOURCES
#
gLHello_SOURCES += \
$${LAMNA_SRC}/lamna/gui/gtk/application/window_main.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/main_signals.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/application/window.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/drawing_area.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/widget_signals.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/gtk.cpp \
\
$${LAMNA_SRC}/lamna/graphic/surface/cairo/color.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/object.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/image.cpp \
$${LAMNA_SRC}/lamna/gui/gtk/cairo/context.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/cairo/pixel.cpp \
$${LAMNA_SRC}/lamna/gui/cairo/pattern.cpp \
$${LAMNA_SRC}/lamna/gui/cairo/cairo.cpp \
\
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \
\
$${LAMNA_SRC}/lamna/app/gui/gtk/hello/main.cpp \

########################################################################
# gLHello FRAMEWORKS
#
gLHello_FRAMEWORKS += \
$${lamna_FRAMEWORKS} \
$${lamna_gtk_FRAMEWORKS} \

# gLHello LIBS
#
gLHello_LIBS += \
$${lamna_LIBS} \
$${lamna_gtk_LIBS} \
