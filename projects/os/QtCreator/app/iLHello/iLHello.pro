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
#   File: iLHello.pro
#
# Author: $author$
#   Date: 11/19/2018
#
# QtCreator .pro file for lamna executable iLHello
########################################################################
include(../../../../../../build/QtCreator/cocoa.pri)
include(../../../../../../build/QtCreator/lamna.pri)
include(../../../../../build/QtCreator/lamna.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/iLHello/iLHello.pri)

TARGET = $${iLHello_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${iLHello_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${iLHello_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${iLHello_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${iLHello_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${iLHello_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${iLHello_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${iLHello_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${iLHello_LIBS} \
$${FRAMEWORKS} \


