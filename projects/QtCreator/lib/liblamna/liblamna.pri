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
#   File: liblamna.pri
#
# Author: $author$
#   Date: 11/19/2018, 12/14/2020
#
# QtCreator .pri file for lamna library liblamna
########################################################################

########################################################################
# liblamna

# liblamna TARGET
#
liblamna_TARGET = lamna
liblamna_TEMPLATE = lib
liblamna_CONFIG += staticlib

# liblamna INCLUDEPATH
#
liblamna_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

# liblamna DEFINES
#
liblamna_DEFINES += \
$${lamna_DEFINES} \
XOS_NO_ERR_LOG_DEBUG \
XOS_NO_ERR_LOG_TRACE \
XOS_LOGGING_LEVELS_DEFAULT=XOS_LOGGING_LEVELS_ERROR \

########################################################################
# liblamna OBJECTIVE_HEADERS
#
#liblamna_OBJECTIVE_HEADERS += \
#$${LAMNA_SRC}/lamna/base/Base.hh \

# liblamna OBJECTIVE_SOURCES
#
#liblamna_OBJECTIVE_SOURCES += \
#$${LAMNA_SRC}/lamna/base/Base.mm \

########################################################################
# liblamna HEADERS
#
liblamna_HEADERS += \
$${LAMNA_SRC}/lamna/base/base.hpp \
$${LAMNA_SRC}/lamna/graphic/image_base.hpp \
$${LAMNA_SRC}/lamna/lib/lamna/version.hpp \

# liblamna SOURCES
#
liblamna_SOURCES += \
$${LAMNA_SRC}/lamna/base/base.cpp \
$${LAMNA_SRC}/lamna/graphic/image_base.cpp \
$${LAMNA_SRC}/lamna/lib/lamna/version.cpp \

########################################################################



