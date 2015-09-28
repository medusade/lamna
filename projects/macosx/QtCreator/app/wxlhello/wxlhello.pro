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
#   File: wxlhello.pro
#
# Author: $author$
#   Date: 9/23/2015
########################################################################
include(../../../../../build/QtCreator/wx.pri)
include(../../wx.pri)
include(../../../../QtCreator/lamna.pri)
include(../../lamna.pri)
include(../../../../QtCreator/app/wxlhello/wxlhello.pri)

TARGET = wxlhello

INCLUDEPATH += \
$${wxlhello_INCLUDEPATH} \
$${wx_INCLUDEPATH} \

DEFINES += \
$${wxlhello_DEFINES} \
$${wx_DEFINES} \

HEADERS += \
$${wxlhello_HEADERS} \

SOURCES += \
$${wxlhello_SOURCES} \

LIBS += \
$${wxlhello_LIBS} \
$${wx_LIBS} \

