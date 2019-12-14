# Install script for directory: F:/Software/mysql-5.7.12/mysql-5.7.12/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/MySQL")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "F:/Software/mysql-5.7.12/mysql-5.7.12/include/../libbinlogevents/export/binary_log_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql_com.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_command.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql_time.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_list.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_alloc.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/typelib.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql/plugin.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql/plugin_audit.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql/plugin_ftparser.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql/plugin_validate_password.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql/plugin_keyring.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql/plugin_group_replication.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_dbug.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/m_string.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_sys.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_xml.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql_embed.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_thread.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_thread_local.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/decimal.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/errmsg.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_global.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_getopt.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/sslopt-longopts.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_dir.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/sslopt-vars.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/sslopt-case.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/sql_common.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/keycache.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/m_ctype.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_compiler.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql_com_server.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/my_byteorder.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/byte_order_generic.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/byte_order_generic_x86.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/little_endian.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/big_endian.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/thr_cond.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/thr_mutex.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/include/thr_rwlock.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/include/mysql_version.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/include/my_config.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/include/mysqld_ername.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/include/mysqld_error.h"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/include/sql_state.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mysql" TYPE DIRECTORY FILES "F:/Software/mysql-5.7.12/mysql-5.7.12/include/mysql/" REGEX "/[^/]*\\.h$" REGEX "/psi\\_abi[^/]*$" EXCLUDE)
endif()

