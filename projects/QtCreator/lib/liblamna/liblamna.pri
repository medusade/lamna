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
#   File: liblamna.pri
#
# Author: $author$
#   Date: 5/25/2015
########################################################################

liblamna_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

liblamna_DEFINES += \
$${lamna_DEFINES} \

liblamna_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/image_base.hpp \
$${LAMNA_SRC}/lamna/base/base.hpp \

liblamna_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/image_base.cpp \
$${LAMNA_SRC}/lamna/base/base.cpp \

liblamna_LIBS += \
$${lamna_LIBS} \
