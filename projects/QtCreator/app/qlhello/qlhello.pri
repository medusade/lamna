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
#   File: qlhello.pri
#
# Author: $author$
#   Date: 5/30/2015
########################################################################

qlhello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

qlhello_DEFINES += \
$${lamna_DEFINES} \

qlhello_HEADERS += \
$${LAMNA_SRC}/lamna/app/gui/qt/hello/main.hpp \
$${LAMNA_SRC}/lamna/gui/qt/application/window_main.hpp \
$${LAMNA_SRC}/lamna/gui/qt/application/main.hpp \
$${LAMNA_SRC}/lamna/gui/qt/main.hpp \
$${LAMNA_SRC}/lamna/gui/main.hpp \
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \

qlhello_SOURCES += \
$${LAMNA_SRC}/lamna/app/gui/qt/hello/main.cpp \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

qlhello_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/image_object.hpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_ellipse.hpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_circle.hpp \
$${LAMNA_SRC}/lamna/graphic/image.hpp \
$${LAMNA_SRC}/lamna/graphic/image_base.hpp \
$${LAMNA_SRC}/lamna/graphic/list.hpp \

qlhello_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/image_object.cpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_ellipse.cpp \
$${LAMNA_SRC}/lamna/graphic/midpoint_circle.cpp \
$${LAMNA_SRC}/lamna/graphic/image.cpp \
$${LAMNA_SRC}/lamna/graphic/image_base.cpp \
$${LAMNA_SRC}/lamna/graphic/list.cpp \

qlhello_LIBS += \
$${lamna_LIBS} \



