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
#   File: xlhello.pro
#
# Author: $author$
#   Date: 9/8/2015
########################################################################
#include(../../../../../build/QtCreator/x11.pri)
include(../../x11.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/xlhello/xlhello.pri)

TARGET = xlhello

INCLUDEPATH += \
$${xlhello_INCLUDEPATH} \
$${x11_INCLUDEPATH} \

DEFINES += \
$${x11_DEFINES} \
$${xlhello_DEFINES} \

HEADERS += \
$${xlhello_HEADERS} \

SOURCES += \
$${xlhello_SOURCES} \

LIBS += \
$${xlhello_LIBS} \
$${x11_LIBS} \


