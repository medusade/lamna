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
#   File: Makefile
#
# Author: $author$
#   Date: 3/24/2016
#
# linux Gcc Makefile for lamna executable xlhello
########################################################################
PKG = ../../../../../..
OS = linux

BMK = build/Makefile/Gcc
MAK = projects/Makefile/Gcc
PRJ = projects/$(OS)/Makefile/Gcc
SRC = src

include $(PKG)/$(MAK)/Makedefines
include $(PKG)/$(PRJ)/Makedefines
include $(PKG)/$(BMK)/Makefile
include $(PKG)/$(MAK)/Makefile
include $(PKG)/$(MAK)/lib/liblamna/Makefile
include $(PKG)/$(MAK)/app/xlhello/Makefile

#
# target
#
EXETARGET = xlhello

#
# user defines
#
USRDEFINES = \
${liblamna_USRDEFINES} \

#
# user includes
#
USRINCLUDES = \
${liblamna_USRINCLUDES} \

#
# user libdirs
#
USRLIBDIRS = \
${liblamna_USRLIBDIRS} \

#
# user c++ flags
#
USRCXXFLAGS = \
${liblamna_USRCXXFLAGS} \

#
# user c flags
#
USRCFLAGS = \
${liblamna_USRCFLAGS} \

#
# user ld flags
#
USRLDFLAGS = \
${liblamna_USRLDFLAGS} \

#
# Executable C sources
#
EXE_C_SOURCES = \
${xlhello_EXE_C_SOURCES} \

#
# Executable C++ .cc sources
#
EXE_CC_SOURCES = \
${xlhello_EXE_CC_SOURCES} \

#
# Executable C++ .cxx sources
#
EXE_CXX_SOURCES = \
${xlhello_EXE_CXX_SOURCES} \

#
# Executable C++ .cpp sources
#
EXE_CPP_SOURCES = \
${xlhello_EXE_CPP_SOURCES} \

#
# Executable Objective C .m sources
#
EXE_M_SOURCES = \
${xlhello_EXE_M_SOURCES} \

#
# Executable Objective C++ .mm sources
#
EXE_MM_SOURCES = \
${xlhello_EXE_MM_SOURCES} \

#
# Executable libs
#
#LIBS = \
#-lsomelib
#
LIBS = \
${liblamna_LIBS} \
${x11_LIBS} \

#
# Executable depends
#
#EXEDEP = \
#$(PKG)/$(BLD)/libsomelib \
#
EXEDEP = \

#
# Executable depend dirs
#
#EXEDEP_DIRS = \
#../libsomelib
#
EXEDEP_DIRS = \

include $(PKG)/$(PRJ)/Makerules

#
# Executable depend rules
#
#$(PKG)/$(BLD)/libsomelib.a:
#	@(echo Building libsomelib.a ...;\
#	  pushd ../libsomelib;\
#	  ((make) || (exit 1));\
#	  popd)
#
