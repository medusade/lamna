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
#   File: Makefile
#
# Author: $author$
#   Date: 12/23/2015
#
# Generic Gcc Makefile for lamna
########################################################################
LAMNA_PKG = ${PKG}
LAMNA_SRC = ${LAMNA_PKG}/src
LAMNA_BLD = ${LAMNA_PKG}/${BLD}/${BUILD_TYPE}
LAMNA_LIB = ${LAMNA_BLD}/lib
LAMNA_BIN = ${LAMNA_BLD}/bin

########################################################################
# fl
fl_USRINCLUDES += \
${build_fl_USRINCLUDES} \

fl_USRDEFINES += \
${build_fl_USRDEFINES} \

fl_USRCXXFLAGS += \
${build_fl_USRCXXFLAGS} \

fl_USRLIBDIRS += \
${build_fl_USRLIBDIRS} \

fl_LIBS += \
${build_fl_LIBS} \

########################################################################
# wx
wx_USRINCLUDES += \
${build_wx_USRINCLUDES} \

wx_USRDEFINES += \
${build_wx_USRDEFINES} \

wx_USRCXXFLAGS += \
${build_wx_USRCXXFLAGS} \

wx_USRLIBDIRS += \
${build_wx_USRLIBDIRS} \

wx_LIBS += \
${build_wx_LIBS} \

########################################################################
# xos
XOS_PKG = ${LAMNA_PKG}/../nadir
XOS_SRC = ${XOS_PKG}/src
XOS_BLD = ${XOS_PKG}/${BLD}/${BUILD_TYPE}
XOS_LIB = ${XOS_BLD}/lib
XOS_BIN = ${XOS_BLD}/bin

########################################################################
# lamna
lamna_USRDEFINES += \

lamna_USRINCLUDES += \
-I${LAMNA_SRC} \
-I${XOS_SRC} \

lamna_USRCXXFLAGS += \
-std=c++0x \

lamna_USRLIBDIRS += \
-L${XOS_LIB} \

lamna_LIBS += \
-lxosnadir \

