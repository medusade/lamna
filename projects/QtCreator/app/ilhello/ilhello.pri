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
#   File: ilhello.pri
#
# Author: $author$
#   Date: 10/15/2015
########################################################################

ilhello_INCLUDEPATH += \
$${lamna_INCLUDEPATH} \

ilhello_DEFINES += \
$${lamna_DEFINES} \

########################################################################
ilhello_OBJECTIVE_HEADERS += \
$${LAMNA_SRC}/lamna/gui/cocoa/iWindowMain.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/iOptMain.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/iMain.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/iCocoa.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/iOs.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/apple/osx/cocoa.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/os/os.hh \

ilhello_OBJECTIVE_SOURCES += \
$${LAMNA_SRC}/lamna/gui/cocoa/iWindowMain.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/iOptMain.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/iMain.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/iCocoa.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/iOs.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/apple/osx/cocoa.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/os/os.mm \

ilhello_HEADERS += \

ilhello_SOURCES += \

########################################################################
ilhello_OBJECTIVE_HEADERS += \
$${LAMNA_SRC}/lamna/app/gui/cocoa/iHelloMain.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/apple/osx/main.hh \
$${LAMNA_SRC}/lamna/gui/cocoa/apple/osx/main_main.hh \

ilhello_OBJECTIVE_SOURCES += \
$${LAMNA_SRC}/lamna/app/gui/cocoa/iHelloMain.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/apple/osx/main.mm \
$${LAMNA_SRC}/lamna/gui/cocoa/apple/osx/main_main.mm \

ilhello_HEADERS += \

ilhello_SOURCES += \

########################################################################

ilhello_LIBS += \
$${lamna_LIBS} \

