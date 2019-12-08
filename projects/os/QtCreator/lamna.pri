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
#   Date: 11/19/2018
#
# Os QtCreator .pri file for lamna
########################################################################
UNAME = $$system(uname)

contains(UNAME,Windows) {
LAMNA_OS = windows
} else {
contains(UNAME,Darwin) {
LAMNA_OS = macosx
} else {
LAMNA_OS = linux
}
}

contains(LAMNA_BUILD,LAMNA_OS) {
LAMNA_BUILD = $${LAMNA_OS}
} else {
LAMNA_BUILD = os
}

#CONFIG += c++11
#CONFIG += c++0x

########################################################################
# nadir
NADIR_THIRDPARTY_PKG_MAKE_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${LAMNA_BUILD}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_MAKE_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${LAMNA_BUILD}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PKG_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${LAMNA_BUILD}/QtCreator/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${LAMNA_BUILD}/QtCreator/$${BUILD_CONFIG}
NADIR_PKG_BLD = $${OTHER_BLD}/$${NADIR_PKG}/build/$${LAMNA_BUILD}/QtCreator/$${BUILD_CONFIG}
NADIR_PRJ_BLD = $${OTHER_BLD}/$${NADIR_PRJ}/build/$${LAMNA_BUILD}/QtCreator/$${BUILD_CONFIG}
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_BLD}/lib
#NADIR_LIB = $${NADIR_PKG_BLD}/lib
NADIR_LIB = $${NADIR_PRJ_BLD}/lib
#NADIR_LIB = $${LAMNA_LIB}

# nadir LIBS
#
nadir_LIBS += \
-L$${NADIR_LIB}/lib$${NADIR_NAME} \
-l$${NADIR_NAME} \

# xosnadir LIBS
#
xosnadir_LIBS += \
-L$${NADIR_LIB}/libxos$${NADIR_NAME} \
-lxos$${NADIR_NAME} \

########################################################################
# lamna

# lamna INCLUDEPATH
#
lamna_INCLUDEPATH += \

# lamna DEFINES
#
lamna_DEFINES += \

# lamna LIBS
#
lamna_LIBS += \
$${xosnadir_LIBS} \
$${build_lamna_LIBS} \
-lpthread \
-ldl \

contains(LAMNA_OS,linux) {
lamna_LIBS += \
-lrt
} else {
}

########################################################################
contains(UNAME,Darwin) {
# lamna qt INCLUDEPATH
#
lamna_qt_INCLUDEPATH += \

# lamna qt DEFINES
#
lamna_qt_DEFINES += \

# lamna qt_LIBS
#
lamna_qt_LIBS += \

# lamna qt FRAMEWORKS
#
lessThan(QT_MAJOR_VERSION, 5) {
lamna_qt_FRAMEWORKS += -framework QtGui
} else {
lamna_qt_FRAMEWORKS += -framework QtWidgets
}
} else {
} # contains(UNAME,Darwin)

########################################################################
contains(UNAME,Darwin) {
# lamna cocoa INCLUDEPATH
#
lamna_cocoa_INCLUDEPATH += \

# lamna cocoa DEFINES
#
lamna_cocoa_DEFINES += \

# lamna cocoa_LIBS
#
lamna_cocoa_LIBS += \

# lamna cocoa FRAMEWORKS
#
lamna_cocoa_FRAMEWORKS += \
-framework AppKit \
-framework CoreFoundation \
-framework Foundation
} else {
} # contains(UNAME,Darwin)

########################################################################
contains(UNAME,Darwin) {
# lamna fl INCLUDEPATH
#
lamna_fl_INCLUDEPATH += \
${HOME}/build/fltk/include \

# lamna fl DEFINES
#
lamna_fl_DEFINES += \

# lamna fl_LIBS
#
lamna_fl_LIBS += \
-L${HOME}/build/fltk/lib \
-lfltk_forms \
-lfltk_gl \
-lfltk_images \
-lfltk_jpeg \
-lfltk_png \
-lfltk \

# lamna fl FRAMEWORKS
#
lamna_fl_FRAMEWORKS += -framework Cocoa
} else {
# lamna fl INCLUDEPATH
#
lamna_fl_INCLUDEPATH += \
$${build_fl_INCLUDEPATH}

# lamna fl DEFINES
#
lamna_fl_DEFINES += \
$${build_fl_DEFINES}

# lamna fl_LIBS
#
lamna_fl_LIBS += \
$${build_fl_LIBS}

# lamna fl FRAMEWORKS
#
lamna_fl_FRAMEWORKS += \
$${build_fl_FRAMEWORKS}
} # contains(UNAME,Darwin)

########################################################################
contains(UNAME,Darwin) {
# lamna wx INCLUDEPATH
#
lamna_wx_INCLUDEPATH += \
${HOME}/build/wxwidgets/include/wx-3.0 \
${HOME}/build/wxwidgets/lib/wx/include/osx_cocoa-unicode-3.0

# lamna wx DEFINES
#
lamna_wx_DEFINES += \
__WXOSX_COCOA__

# lamna wx_LIBS
#
lamna_wx_LIBS += \
-L${HOME}/build/wxwidgets/lib \
-lwx_osx_cocoau_core-3.0 \
-lwx_baseu-3.0

# lamna wx FRAMEWORKS
#
lamna_wx_FRAMEWORKS += \
-framework CoreFoundation
} else {
# lamna wx INCLUDEPATH
#
lamna_wx_INCLUDEPATH += \
$${build_wx_INCLUDEPATH}

# lamna wx DEFINES
#
lamna_wx_DEFINES += \
$${build_wx_DEFINES}

# lamna wx_LIBS
#
lamna_wx_LIBS += \
$${build_wx_LIBS}

# lamna wx FRAMEWORKS
#
lamna_wx_FRAMEWORKS += \
$${build_wx_FRAMEWORKS}
} # contains(UNAME,Darwin)

########################################################################
contains(UNAME,Darwin) {
} else {
# lamna gtk INCLUDEPATH
#
lamna_gtk_INCLUDEPATH += \
$${build_gtk_INCLUDEPATH}

# lamna gtk DEFINES
#
lamna_gtk_DEFINES += \
$${build_gtk_DEFINES}

# lamna gtk_LIBS
#
lamna_gtk_LIBS += \
$${build_gtk_LIBS}

# lamna gtk FRAMEWORKS
#
lamna_gtk_FRAMEWORKS += \
$${build_gtk_FRAMEWORKS}
} # contains(UNAME,Darwin)

########################################################################
contains(UNAME,Darwin) {
} else {
# lamna x11 INCLUDEPATH
#
lamna_x11_INCLUDEPATH += \
$${build_x11_INCLUDEPATH}

# lamna x11 DEFINES
#
lamna_x11_DEFINES += \
$${build_x11_DEFINES}

# lamna x11_LIBS
#
lamna_x11_LIBS += \
$${build_x11_LIBS}

# lamna x11 FRAMEWORKS
#
lamna_x11_FRAMEWORKS += \
$${build_x11_FRAMEWORKS}
} # contains(UNAME,Darwin)
