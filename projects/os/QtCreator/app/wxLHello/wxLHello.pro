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
#   File: wxLHello.pro
#
# Author: $author$
#   Date: 11/20/2018, 11/29/2020
#
# QtCreator .pro file for lamna executable wxLHello
########################################################################
include(../../../../../../build/QtCreator/wx.pri)
include(../../../../../../build/QtCreator/lamna.pri)
include(../../../../../build/QtCreator/lamna.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/wxLHello/wxLHello.pri)

TARGET = $${wxLHello_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${wxLHello_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${wxLHello_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${wxLHello_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${wxLHello_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${wxLHello_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${wxLHello_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${wxLHello_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${wxLHello_LIBS} \
$${FRAMEWORKS} \

########################################################################
# NO Qt
QT -= gui core
