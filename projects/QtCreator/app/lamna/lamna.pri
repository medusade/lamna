########################################################################
# Copyright (c) 1988-2019 $organization$
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
#   Date: 7/18/2019
#
# QtCreator .pri file for lamna executable lamna
########################################################################

########################################################################
# lamna

# lamna_exe TARGET
#
lamna_exe_TARGET = lamna

# lamna_exe INCLUDEPATH
#
lamna_exe_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

# lamna_exe DEFINES
#
lamna_exe_DEFINES += \
$${lamna_DEFINES} \

########################################################################
# lamna_exe OBJECTIVE_HEADERS
#
#lamna_exe_OBJECTIVE_HEADERS += \
#$${LAMNA_SRC}/lamna/base/Base.hh \

# lamna_exe OBJECTIVE_SOURCES
#
#lamna_exe_OBJECTIVE_SOURCES += \
#$${LAMNA_SRC}/lamna/base/Base.mm \

########################################################################
# lamna_exe HEADERS
#
lamna_exe_HEADERS += \
$${LAMNA_SRC}/lamna/app/console/lamna/main.hpp \

# lamna_exe SOURCES
#
lamna_exe_SOURCES += \
$${LAMNA_SRC}/lamna/app/console/lamna/main.cpp \

########################################################################
# lamna_exe FRAMEWORKS
#
lamna_exe_FRAMEWORKS += \
$${lamna_FRAMEWORKS} \

# lamna_exe LIBS
#
lamna_exe_LIBS += \
$${lamna_LIBS} \


