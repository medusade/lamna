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
#   File: gLHello.pro
#
# Author: $author$
#   Date: 11/24/2018
#
# QtCreator .pro file for lamna executable gLHello
########################################################################
include(../../../../../../build/QtCreator/gtk.pri)
include(../../../../../build/QtCreator/lamna.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/gLHello/gLHello.pri)

TARGET = $${gLHello_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${gLHello_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${gLHello_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${gLHello_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${gLHello_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${gLHello_HEADERS} \

# SOURCES
#
SOURCES += \
$${gLHello_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${gLHello_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${gLHello_LIBS} \
$${FRAMEWORKS} \


