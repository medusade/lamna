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
#   File: xlhello.pri
#
# Author: $author$
#   Date: 9/8/2015
########################################################################

xlhello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

xlhello_DEFINES += \
$${lamna_DEFINES} \

########################################################################
xlhello_HEADERS += \
$${LAMNA_SRC}/lamna/gui/main.hpp \

xlhello_SOURCES += \

########################################################################
xlhello_HEADERS += \
$${LAMNA_SRC}/lamna/gui/x11/window_main.hpp \
$${LAMNA_SRC}/lamna/gui/x11/main_window.hpp \
$${LAMNA_SRC}/lamna/gui/x11/main.hpp \
$${LAMNA_SRC}/lamna/gui/x11/colormap.hpp \
$${LAMNA_SRC}/lamna/gui/x11/color.hpp \
$${LAMNA_SRC}/lamna/gui/x11/xcolor.hpp \
$${LAMNA_SRC}/lamna/gui/x11/window.hpp \
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

_xlhello_HEADERS += \
$${LAMNA_SRC}/lamna/gui/x11/application/window_main.hpp \
$${LAMNA_SRC}/lamna/gui/x11/application/main.hpp \
$${LAMNA_SRC}/lamna/gui/x11/application/window.hpp \

xlhello_SOURCES += \
$${LAMNA_SRC}/lamna/gui/x11/main_window.cpp \
$${LAMNA_SRC}/lamna/gui/x11/window.cpp \
$${LAMNA_SRC}/lamna/gui/x11/colormap.cpp \
$${LAMNA_SRC}/lamna/gui/x11/color.cpp \
$${LAMNA_SRC}/lamna/gui/x11/xcolor.cpp \
$${LAMNA_SRC}/lamna/gui/x11/atom.cpp \
$${LAMNA_SRC}/lamna/gui/x11/display.cpp \
$${LAMNA_SRC}/lamna/gui/x11/screen.cpp \
$${LAMNA_SRC}/lamna/gui/x11/context.cpp \
$${LAMNA_SRC}/lamna/gui/x11/event.cpp \
$${LAMNA_SRC}/lamna/gui/x11/event_target.cpp \
$${LAMNA_SRC}/lamna/gui/x11/created.cpp \
$${LAMNA_SRC}/lamna/gui/x11/attached.cpp \
$${LAMNA_SRC}/lamna/gui/x11/attacher.cpp \
$${LAMNA_SRC}/lamna/gui/x11/x11.cpp \
$${LAMNA_SRC}/lamna/gui/x11/gl.cpp \

_xlhello_SOURCES += \
$${LAMNA_SRC}/lamna/gui/x11/application/window_main.cpp \
$${LAMNA_SRC}/lamna/gui/x11/application/window.cpp \

########################################################################
_xlhello_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/surface/x11/color.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/object.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/image.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/context.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/pixel.hpp \

_xlhello_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/surface/x11/color.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/object.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/image.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/x11/pixel.cpp \

########################################################################
xlhello_HEADERS += \
$${LAMNA_SRC}/lamna/app/gui/x11/hello/main.hpp \
$${LAMNA_SRC}/lamna/app/gui/hello/main.hpp \
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \

xlhello_SOURCES += \
$${LAMNA_SRC}/lamna/app/gui/x11/hello/main.cpp \
$${LAMNA_SRC}/lamna/gui/x11/window_main.cpp \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

########################################################################

xlhello_LIBS += \
$${lamna_LIBS} \
