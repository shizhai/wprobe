# Install script for directory: /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libubox" TYPE FILE FILES
    "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/ustream-openssl.h"
    "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/ustream-ssl.h"
    "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/ustream-internal.h"
    "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/ustream-polarssl.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libustream-ssl.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libustream-ssl.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libustream-ssl.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/libustream-ssl.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libustream-ssl.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libustream-ssl.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/:" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libustream-ssl.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/ustream-ssl-polarssl/ustream-ssl-2013-07-24/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
