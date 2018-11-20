########################################################################
# Copyright (c) 1988-2016 $organization$
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
#   File: pgm.pri
#
# Author: $author$
#   Date: 7/15/2016
########################################################################

pgm_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \
$${libpgm_INCLUDEPATH} \

pgm_DEFINES += \
$${lamna_DEFINES} \
$${libpgm_DEFINES} \

########################################################################

pgm_HEADERS += \
$${LAMNA_SRC}/lamna/graphic/image/format/raw/libpgm/reader.hpp \
$${LAMNA_SRC}/lamna/graphic/image/format/pgm/libpgm/reader.hpp \
$${LAMNA_SRC}/lamna/graphic/image/format/pgm/libpgm/reader_events.hpp \
$${LAMNA_SRC}/lamna/graphic/image/format/pgm/libpgm/libpgm.hpp \

pgm_SOURCES += \
$${LAMNA_SRC}/lamna/graphic/image/format/raw/libpgm/reader.cpp \
$${LAMNA_SRC}/lamna/graphic/image/format/pgm/libpgm/reader_events.cpp \
$${LAMNA_SRC}/lamna/graphic/image/format/pgm/libpgm/libpgm.cpp \

########################################################################

pgm_HEADERS += \
$${LAMNA_SRC}/lamna/app/console/pgm/main.hpp \
$${LAMNA_SRC}/lamna/console/main.hpp \
$${LAMNA_SRC}/lamna/console/main_opt.hpp \
$${LAMNA_SRC}/lamna/console/main_main.hpp \

pgm_SOURCES += \
$${LAMNA_SRC}/lamna/app/console/pgm/main.cpp \
$${LAMNA_SRC}/lamna/console/main_opt.cpp \
$${LAMNA_SRC}/lamna/console/main_main.cpp \

########################################################################

pgm_LIBS += \
$${lamna_LIBS} \
$${libpgm_LIBS} \

