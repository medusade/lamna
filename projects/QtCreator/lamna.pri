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
#   File: lamna.pri
#
# Author: $author$
#   Date: 5/25/2015
########################################################################
LAMNA_PKG = ../../../../..
LAMNA_BLD = ../..
LAMNA_PRJ = $${LAMNA_PKG}
LAMNA_BIN = $${LAMNA_BLD}/bin
LAMNA_LIB = $${LAMNA_BLD}/lib
LAMNA_SRC = $${LAMNA_PKG}/src

CONFIG(debug, debug|release) {
LAMNA_CONFIG = Debug
} else {
LAMNA_CONFIG = Release
}

########################################################################
# xos
XOS_PKG = $${LAMNA_PKG}/../nadir
XOS_PRJ = $${XOS_PKG}
XOS_SRC = $${XOS_PKG}/src

xos_INCLUDEPATH += \
$${XOS_SRC} \

xos_DEFINES += \

########################################################################

lamna_INCLUDEPATH += \
$${LAMNA_SRC} \
$${xos_INCLUDEPATH} \

lamna_DEFINES += \
$${xos_DEFINES} \

lamna_LIBS += \
-L$${LAMNA_LIB}/liblamna \
-llamna \

