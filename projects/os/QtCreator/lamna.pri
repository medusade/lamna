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

contains(UNAME,Darwin) {
LAMNA_OS = macosx
} else {
LAMNA_OS = linux
}

#CONFIG += c++11
#CONFIG += c++0x

########################################################################
# nadir
NADIR_THIRDPARTY_PKG_MAKE_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${LAMNA_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_MAKE_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${LAMNA_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PKG_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${LAMNA_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${LAMNA_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PKG_BLD = $${OTHER_BLD}/$${NADIR_PKG}/build/$${LAMNA_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PRJ_BLD = $${OTHER_BLD}/$${NADIR_PRJ}/build/$${LAMNA_OS}/QtCreator/$${BUILD_CONFIG}
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
contains(UNAME,Darwin) {
lamna_cocoa_FRAMEWORKS += \
-framework AppKit \
-framework CoreFoundation \
-framework Foundation
} else {
}

########################################################################
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

########################################################################
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
contains(UNAME,Darwin) {
lamna_fl_FRAMEWORKS += -framework Cocoa
} else {
}

########################################################################
# lamna wx INCLUDEPATH
#
contains(UNAME,Darwin) {
lamna_wx_INCLUDEPATH += \
${HOME}/build/wxwidgets/include/wx-3.0 \
${HOME}/build/wxwidgets/lib/wx/include/osx_cocoa-unicode-3.0
} else {
}

# lamna wx DEFINES
#
contains(UNAME,Darwin) {
lamna_wx_DEFINES += \
__WXOSX_COCOA__
} else {
}

# lamna wx_LIBS
#
contains(UNAME,Darwin) {
lamna_wx_LIBS += \
-L${HOME}/build/wxwidgets/lib \
-lwx_osx_cocoau_core-3.0 \
-lwx_baseu-3.0
} else {
}

# lamna wx FRAMEWORKS
#
contains(UNAME,Darwin) {
lamna_wx_FRAMEWORKS += \
-framework CoreFoundation
} else {
}
