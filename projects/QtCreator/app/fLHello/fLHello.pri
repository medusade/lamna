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
#   File: fLHello.pri
#
# Author: $author$
#   Date: 11/19/2018
#
# QtCreator .pri file for lamna executable fLHello
########################################################################

########################################################################
# fLHello

# fLHello TARGET
#
fLHello_TARGET = fLHello

# fLHello INCLUDEPATH
#
fLHello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \
$${lamna_fl_INCLUDEPATH} \

# fLHello DEFINES
#
fLHello_DEFINES += \
$${lamna_DEFINES} \
$${lamna_fl_DEFINES} \

########################################################################
# fLHello OBJECTIVE_HEADERS
#
#fLHello_OBJECTIVE_HEADERS += \
#$${LAMNA_SRC}/lamna/base/Base.hh \

# fLHello OBJECTIVE_SOURCES
#
#fLHello_OBJECTIVE_SOURCES += \
#$${LAMNA_SRC}/lamna/base/Base.mm \

########################################################################
# fLHello HEADERS
#
fLHello_HEADERS += \
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
\
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

# fLHello SOURCES
#
fLHello_SOURCES += \
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
\
$${LAMNA_SRC}/lamna/app/gui/fl/hello/main.cpp \
$${LAMNA_SRC}/lamna/gui/fl/window.cpp \
$${LAMNA_SRC}/lamna/gui/fl/widget.cpp \
$${LAMNA_SRC}/lamna/gui/fl/fl.cpp \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

########################################################################
# fLHello FRAMEWORKS
#
fLHello_FRAMEWORKS += \
$${lamna_fl_FRAMEWORKS} \
$${lamna_FRAMEWORKS} \

# fLHello LIBS
#
fLHello_LIBS += \
$${lamna_fl_LIBS} \
$${lamna_LIBS} \

