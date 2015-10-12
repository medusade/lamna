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
#   File: fllhello.pri
#
# Author: $author$
#   Date: 9/30/2015
########################################################################

fllhello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

fllhello_DEFINES += \
$${lamna_DEFINES} \

########################################################################

_fllhello_HEADERS += \
$${LAMNA_SRC}/lamna/gui/fl/app.hpp \

fllhello_HEADERS += \
$${LAMNA_SRC}/lamna/app/gui/fl/hello/main.hpp \
$${LAMNA_SRC}/lamna/gui/fl/main.hpp \
$${LAMNA_SRC}/lamna/gui/fl/window.hpp \
$${LAMNA_SRC}/lamna/gui/fl/widget.hpp \
$${LAMNA_SRC}/lamna/gui/fl/fl.hpp \
$${LAMNA_SRC}/lamna/app/gui/hello/main.hpp \
$${LAMNA_SRC}/lamna/gui/main.hpp \
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \

_fllhello_SOURCES += \
$${LAMNA_SRC}/lamna/gui/fl/app.cpp \

fllhello_SOURCES += \
$${LAMNA_SRC}/lamna/app/gui/fl/hello/main.cpp \
$${LAMNA_SRC}/lamna/gui/fl/window.cpp \
$${LAMNA_SRC}/lamna/gui/fl/widget.cpp \
$${LAMNA_SRC}/lamna/gui/fl/fl.cpp \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

########################################################################

_fllhello_HEADERS += \

fllhello_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/surface/fl/color.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/object.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/image.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/context.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/pixel.hpp \
$${LAMNA_SRC}/lamna/graphic/surface/filled_circle.hpp \
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

_fllhello_SOURCES += \

fllhello_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/surface/fl/color.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/object.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/image.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/context.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/fl/pixel.cpp \
$${LAMNA_SRC}/lamna/graphic/surface/filled_circle.cpp \
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

fllhello_LIBS += \
$${lamna_LIBS} \

