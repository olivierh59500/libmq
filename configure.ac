## libmq: A library for interacting with message queues
##
##  Author: Mo McRoberts
##
##  Copyright (c) 2014-2017 BBC
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.

AC_INIT([libmq],m4_esyscmd([/bin/sh m4/get-version.sh]),[RESFeedback@bbc.co.uk],,[https://github.com/bbcarchdev/libmq])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([scripts])
AM_INIT_AUTOMAKE([foreign subdir-objects])
AM_MAINTAINER_MODE

PACKAGE_DESC='A library for interacting with message queues'
AC_SUBST([PACKAGE_DESC])

AC_CONFIG_HEADER([config.h])

BT_PROG_XCODE
AC_PROG_CC([clang c99 gcc cc])
BT_PROG_CC_WARN
BT_PROG_CC_DEBUG
AC_PROG_CC_C99
AC_CHECK_HEADERS([strings.h])

LT_INIT

BT_ENABLE_POSIX
BT_ENABLE_XSI
BT_REQUIRE_PTHREAD
BT_REQUIRE_OPENSSL
BT_REQUIRE_LIBDL
BT_CHECK_LIBQPID_PROTON
BT_REQUIRE_LIBCLUSTER

BT_DEFINE_PREFIX

AC_SUBST([LOCAL_LIBS])

AC_CONFIG_FILES([Makefile
queues/Makefile
m4/Makefile
libmq.pc
libmq-uninstalled.pc
])

AC_OUTPUT
