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
#   File: wxlhello.pri
#
# Author: $author$
#   Date: 9/23/2015
########################################################################

wxlhello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

wxlhello_DEFINES += \
$${lamna_DEFINES} \

########################################################################

_wxlhello_HEADERS += \
$${LAMNA_SRC}/lamna/gui/wx/application/window_main.hpp \
$${LAMNA_SRC}/lamna/gui/wx/application/main.hpp \

wxlhello_HEADERS += \
$${LAMNA_SRC}/lamna/app/gui/wx/hello/main.hpp \
$${LAMNA_SRC}/lamna/gui/wx/main.hpp \
$${LAMNA_SRC}/lamna/gui/wx/app.hpp \
$${LAMNA_SRC}/lamna/gui/wx/wx.hpp \
$${LAMNA_SRC}/lamna/app/gui/hello/main.hpp \
$${LAMNA_SRC}/lamna/gui/main.hpp \
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \

_wxlhello_SOURCES += \

wxlhello_SOURCES += \
$${LAMNA_SRC}/lamna/app/gui/wx/hello/main.cpp \
$${LAMNA_SRC}/lamna/gui/wx/app.cpp \
$${LAMNA_SRC}/lamna/gui/wx/wx.cpp \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

########################################################################

_wxlhello_HEADERS += \

wxlhello_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/surface/wx/color.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/object.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/image.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/context.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/pixel.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/color.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/object.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/image.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/context.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/pixel.hpp \
$${LAMNA_SRC}/lamna/graphic/image_object.hpp \
$${LAMNA_SRC}/lamna/graphic/hollow_midpoint_ellipse.hpp \
$${LAMNA_SRC}/lamna/graphic/hollow_midpoint_circle.hpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_ellipse.hpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_circle.hpp \
$${LAMNA_SRC}/lamna/graphic/triangle.hpp \
$${LAMNA_SRC}/lamna/graphic/bresenham_line_context.hpp \
$${LAMNA_SRC}/lamna/graphic/bresenham_line.hpp \
$${LAMNA_SRC}/lamna/graphic/image.hpp \
$${LAMNA_SRC}/lamna/graphic/image_point.hpp \
$${LAMNA_SRC}/lamna/graphic/image_base.hpp \
$${LAMNA_SRC}/lamna/graphic/list.hpp \

_wxlhello_SOURCES += \

wxlhello_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/surface/wx/color.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/object.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/image.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/context.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/wx/pixel.cpp \
$${LAMNA_SRC}/lamna/graphic/hollow_midpoint_ellipse.cpp \
$${LAMNA_SRC}/lamna/graphic/hollow_midpoint_circle.cpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_ellipse.cpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_circle.cpp \
$${LAMNA_SRC}/lamna/graphic/triangle.cpp \
$${LAMNA_SRC}/lamna/graphic/bresenham_line_context.cpp \
$${LAMNA_SRC}/lamna/graphic/bresenham_line.cpp \
$${LAMNA_SRC}/lamna/graphic/image_point.cpp \
$${LAMNA_SRC}/lamna/graphic/image_base.cpp \
$${LAMNA_SRC}/lamna/graphic/list.cpp \

########################################################################

wxlhello_LIBS += \
$${lamna_LIBS} \

