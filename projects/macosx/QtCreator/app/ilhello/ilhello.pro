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
#   File: ilhello.pro
#
# Author: $author$
#   Date: 10/15/2015
########################################################################
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/ilhello/ilhello.pri)

TARGET = ilhello

INCLUDEPATH += \
$${ilhello_INCLUDEPATH} \

DEFINES += \
$${ilhello_DEFINES} \

########################################################################
OBJECTIVE_HEADERS += \
$${ilhello_OBJECTIVE_HEADERS} \

OBJECTIVE_SOURCES += \
$${ilhello_OBJECTIVE_SOURCES} \

########################################################################
HEADERS += \
$${OBJECTIVE_HEADERS} \
$${ilhello_HEADERS} \

SOURCES += \
$${ilhello_SOURCES} \

########################################################################
LIBS += \
$${ilhello_LIBS} \
-framework AppKit \
-framework CoreFoundation \
-framework Foundation \

########################################################################
# NO Qt
QT -= gui core

