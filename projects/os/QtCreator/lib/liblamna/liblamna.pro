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
#   File: liblamna.pro
#
# Author: $author$
#   Date: 11/19/2018
#
# QtCreator .pro file for lamna library liblamna
########################################################################
include(../../../../../build/QtCreator/lamna.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/lib/liblamna/liblamna.pri)

TARGET = $${liblamna_TARGET}
TEMPLATE = $${liblamna_TEMPLATE}
CONFIG += $${liblamna_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${liblamna_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${liblamna_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${liblamna_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${liblamna_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${liblamna_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${liblamna_SOURCES} \

########################################################################

