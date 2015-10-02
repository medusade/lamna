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
#   File: fllhello.pro
#
# Author: $author$
#   Date: 9/30/2015
########################################################################
include(../../../../../build/QtCreator/fl.pri)
include(../../fl.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/fllhello/fllhello.pri)

TARGET = fllhello

INCLUDEPATH += \
$${fllhello_INCLUDEPATH} \
$${fl_INCLUDEPATH} \

DEFINES += \
$${fllhello_DEFINES} \
$${fl_DEFINES} \

HEADERS += \
$${fllhello_HEADERS} \

SOURCES += \
$${fllhello_SOURCES} \

LIBS += \
$${fllhello_LIBS} \
$${fl_LIBS} \

