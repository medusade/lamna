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
#   File: xLHello.pri
#
# Author: $author$
#   Date: 11/24/2018, 12/14/2020
#
# QtCreator .pri file for lamna executable xLHello
########################################################################

########################################################################
# xLHello

# xLHello TARGET
#
xLHello_TARGET = xLHello

# xLHello INCLUDEPATH
#
xLHello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \
$${lamna_x11_INCLUDEPATH} \

# xLHello DEFINES
#
xLHello_DEFINES += \
$${lamna_x11_DEFINES} \
$${lamna_DEFINES} \
XOS_NO_ERR_LOG_DEBUG \
XOS_NO_ERR_LOG_TRACE \
XOS_LOGGING_LEVELS_DEFAULT=XOS_LOGGING_LEVELS_ERROR \

########################################################################
# xLHello OBJECTIVE_HEADERS
#
#xLHello_OBJECTIVE_HEADERS += \
#$${LAMNA_SRC}/lamna/base/Base.hh \

# xLHello OBJECTIVE_SOURCES
#
#xLHello_OBJECTIVE_SOURCES += \
#$${LAMNA_SRC}/lamna/base/Base.mm \

########################################################################
# xLHello HEADERS
#
xLHello_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/surface/x11/color.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/object.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/image.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/context.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/pixel.hpp \
\
$${LAMNA_SRC}/lamna/gui/x11/window_main.hpp \
$${LAMNA_SRC}/lamna/gui/x11/main_window.hpp \
$${LAMNA_SRC}/lamna/gui/x11/main.hpp \
$${LAMNA_SRC}/lamna/gui/x11/colormap.hpp \
$${LAMNA_SRC}/lamna/gui/x11/color.hpp \
$${LAMNA_SRC}/lamna/gui/x11/xcolor.hpp \
$${LAMNA_SRC}/lamna/gui/x11/window.hpp \
$${LAMNA_SRC}/lamna/gui/x11/region.hpp \
$${LAMNA_SRC}/lamna/gui/x11/rectangle.hpp \
$${LAMNA_SRC}/lamna/gui/x11/gc.hpp \
$${LAMNA_SRC}/lamna/gui/x11/atom.hpp \
$${LAMNA_SRC}/lamna/gui/x11/display.hpp \
$${LAMNA_SRC}/lamna/gui/x11/screen.hpp \
$${LAMNA_SRC}/lamna/gui/x11/context.hpp \
$${LAMNA_SRC}/lamna/gui/x11/event.hpp \
$${LAMNA_SRC}/lamna/gui/x11/event_target.hpp \
$${LAMNA_SRC}/lamna/gui/x11/event_target_cases.hpp \
$${LAMNA_SRC}/lamna/gui/x11/event_target_members.hpp \
$${LAMNA_SRC}/lamna/gui/x11/created.hpp \
$${LAMNA_SRC}/lamna/gui/x11/attached.hpp \
$${LAMNA_SRC}/lamna/gui/x11/attacher.hpp \
$${LAMNA_SRC}/lamna/gui/x11/x11.hpp \
$${LAMNA_SRC}/lamna/gui/x11/gl.hpp \
\
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \
\
$${LAMNA_SRC}/lamna/app/gui/x11/hello/main.hpp \
$${LAMNA_SRC}/lamna/app/gui/hello/main.hpp \

# xLHello SOURCES
#
contains(UNAME,Linux) {

xLHello_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/surface/x11/color.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/object.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/image.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/context.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/pixel.cpp \
\
$${LAMNA_SRC}/lamna/gui/x11/main_window.cpp \
$${LAMNA_SRC}/lamna/gui/x11/window.cpp \
$${LAMNA_SRC}/lamna/gui/x11/colormap.cpp \
$${LAMNA_SRC}/lamna/gui/x11/xcolor.cpp \
$${LAMNA_SRC}/lamna/gui/x11/region.cpp \
$${LAMNA_SRC}/lamna/gui/x11/rectangle.cpp \
$${LAMNA_SRC}/lamna/gui/x11/gc.cpp \
$${LAMNA_SRC}/lamna/gui/x11/atom.cpp \
$${LAMNA_SRC}/lamna/gui/x11/display.cpp \
$${LAMNA_SRC}/lamna/gui/x11/screen.cpp \
$${LAMNA_SRC}/lamna/gui/x11/event.cpp \
$${LAMNA_SRC}/lamna/gui/x11/event_target.cpp \
$${LAMNA_SRC}/lamna/gui/x11/created.cpp \
$${LAMNA_SRC}/lamna/gui/x11/attached.cpp \
$${LAMNA_SRC}/lamna/gui/x11/attacher.cpp \
$${LAMNA_SRC}/lamna/gui/x11/x11.cpp \
$${LAMNA_SRC}/lamna/gui/x11/gl.cpp \
\
$${LAMNA_SRC}/lamna/app/gui/x11/hello/main.cpp \
$${LAMNA_SRC}/lamna/gui/x11/window_main.cpp \

} else {
} # contains(UNAME,Linux)

xLHello_SOURCES += \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

########################################################################
# xLHello FRAMEWORKS
#
xLHello_FRAMEWORKS += \
$${lamna_FRAMEWORKS} \
$${lamna_x11_FRAMEWORKS} \

# xLHello LIBS
#
xLHello_LIBS += \
$${lamna_LIBS} \
$${lamna_x11_LIBS} \
