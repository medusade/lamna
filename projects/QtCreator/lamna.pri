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
#   File: lamna.pri
#
# Author: $author$
#   Date: 11/19/2018, 1/12/2021
#
# QtCreator .pri file for lamna
########################################################################

OTHER_PKG = ../../../../../../..
OTHER_PRJ = ../../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/src/$${THIRDPARTY_NAME}

########################################################################
# nadir
NADIR_VERSION_MAJOR = 0
NADIR_VERSION_MINOR = 0
NADIR_VERSION_RELEASE = 0
NADIR_VERSION = $${NADIR_VERSION_MAJOR}.$${NADIR_VERSION_MINOR}.$${NADIR_VERSION_RELEASE}
NADIR_NAME = nadir
NADIR_GROUP = $${NADIR_NAME}
NADIR_SRC_NAME = src
NADIR_SOURCE_NAME = source
NADIR_LIBRARY_NAME = nadir
NADIR_SOURCE_LIBRARY_NAME = base
NADIR_DIR = $${NADIR_GROUP}/$${NADIR_NAME}-$${NADIR_VERSION}
NADIR_PKG_DIR = $${NADIR_NAME}
NADIR_HOME_BUILD = $${HOME}/build/$${NADIR_NAME}
NADIR_HOME_BUILD_INCLUDE = $${NADIR_HOME_BUILD}/include
NADIR_HOME_BUILD_LIB = $${NADIR_HOME_BUILD}/lib
NADIR_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${NADIR_DIR}
NADIR_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${NADIR_DIR}
NADIR_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${NADIR_PKG_DIR}
NADIR_THIRDPARTY_SRC_GROUP = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_NAME = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${NADIR_THIRDPARTY_SRC_GROUP}/$${NADIR_THIRDPARTY_SRC_NAME} 
NADIR_PKG = $${OTHER_PKG}/$${NADIR_PKG_DIR}
NADIR_PRJ = $${OTHER_PRJ}/$${NADIR_PKG_DIR}
#NADIR_SRC = $${NADIR_THIRDPARTY_SRC_DIR}
#NADIR_SRC = $${NADIR_THIRDPARTY_PKG}/$${NADIR_SRC_NAME}
#NADIR_SRC = $${NADIR_THIRDPARTY_PRJ}/$${NADIR_SRC_NAME}
#NADIR_SRC = $${NADIR_PKG}/$${NADIR_SRC_NAME}
NADIR_SRC = $${NADIR_PRJ}/$${NADIR_SRC_NAME}
NADIR_SOURCE = $${NADIR_PRJ}/$${NADIR_SOURCE_NAME}

# nadir INCLUDEPATH
#
nadir_INCLUDEPATH += \
$${NADIR_SRC} \

# nadir DEFINES
#
nadir_DEFINES += \

########################################################################
# nadir SOURCE_INCLUDEPATH
#
nadir_SOURCE_INCLUDEPATH += \
$${NADIR_SOURCE} \
$${nadir_INCLUDEPATH} \

# nadir SOURCE_DEFINES
#
nadir_SOURCE_DEFINES += \
$${nadir_DEFINES} \

########################################################################
# xosnadir INCLUDEPATH
#
xosnadir_INCLUDEPATH += \
$${nadir_INCLUDEPATH} \

# xosnadir DEFINES
#
xosnadir_DEFINES += \
$${nadir_DEFINES} \
NO_USE_NADIR_BASE \
NO_USE_XOS_LOGGER_INTERFACE \

########################################################################
# xosnadir SOURCE_INCLUDEPATH
#
xosnadir_SOURCE_INCLUDEPATH += \
$${nadir_SOURCE_INCLUDEPATH} \

# xosnadir SOURCE_DEFINES
#
xosnadir_SOURCE_DEFINES += \
$${nadir_SOURCE_DEFINES} \
NO_USE_NADIR_BASE \
NO_USE_XOS_LOGGER_INTERFACE \

########################################################################
# lamna
LAMNA_NAME = lamna
LAMNA_SOURCE = src

LAMNA_PKG = ../../../../..
LAMNA_BLD = ../..

LAMNA_PRJ = $${LAMNA_PKG}
LAMNA_BIN = $${LAMNA_BLD}/bin
LAMNA_LIB = $${LAMNA_BLD}/lib
LAMNA_SRC = $${LAMNA_PKG}/$${LAMNA_SOURCE}

# lamna BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
lamna_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
lamna_DEFINES += RELEASE_BUILD
}

# lamna INCLUDEPATH
#
lamna_INCLUDEPATH += \
$${LAMNA_SRC} \
$${xosnadir_INCLUDEPATH} \
$${build_lamna_INCLUDEPATH} \

# lamna DEFINES
#
lamna_DEFINES += \
$${xosnadir_DEFINES} \
$${build_lamna_DEFINES} \

# lamna LIBS
#
lamna_LIBS += \
-L$${LAMNA_LIB}/lib$${LAMNA_NAME} \
-l$${LAMNA_NAME} \
