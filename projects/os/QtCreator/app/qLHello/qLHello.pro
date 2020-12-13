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
#   File: qLHello.pro
#
# Author: $author$
#   Date: 11/19/2018, 11/29/2020
#
# QtCreator .pro file for lamna executable qLHello
########################################################################
include(../../../../../../build/QtCreator/qt.pri)
include(../../../../../../build/QtCreator/lamna.pri)
include(../../../../../build/QtCreator/lamna.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/qLHello/qLHello.pri)

TARGET = $${qLHello_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${qLHello_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${qLHello_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${qLHello_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${qLHello_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${qLHello_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${qLHello_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${qLHello_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${qLHello_LIBS} \
$${FRAMEWORKS} \
