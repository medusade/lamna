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

LAMNA_OS = macosx

########################################################################
# nadir
NADIR_BLD = ../$${NADIR_PKG}/build/$${LAMNA_OS}/QtCreator/$${LAMNA_CONFIG}
NADIR_LIB = $${NADIR_BLD}/lib

########################################################################
# lamna
lamna_INCLUDEPATH += \

lamna_DEFINES += \

lamna_HEADERS += \

lamna_SOURCES += \

lamna_LIBS += \
-L$${NADIR_LIB}/libxosnadir \
-lxosnadir \
-lpthread \
-ldl \

