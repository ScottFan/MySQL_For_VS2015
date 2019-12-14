# Install script for directory: F:/Software/mysql-5.7.12/mysql-5.7.12

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xReadmex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE OPTIONAL FILES
    "F:/Software/mysql-5.7.12/mysql-5.7.12/COPYING"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/LICENSE.mysql"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xReadmex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES "F:/Software/mysql-5.7.12/mysql-5.7.12/README")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/docs" TYPE FILE FILES
    "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/Docs/INFO_SRC"
    "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/Docs/INFO_BIN"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDocumentationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/docs" TYPE DIRECTORY FILES "F:/Software/mysql-5.7.12/mysql-5.7.12/Docs/" REGEX "/makefile\\.[^/]*$" EXCLUDE REGEX "/glibc[^/]*$" EXCLUDE REGEX "/linuxthreads\\.txt$" EXCLUDE REGEX "/myisam\\.txt$" EXCLUDE REGEX "/mysql\\.info$" EXCLUDE REGEX "/sp\\-imp\\-spec\\.txt$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/zlib/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/extra/yassl/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/extra/yassl/taocrypt/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/extra/protobuf/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/archive/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/blackhole/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/csv/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/example/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/federated/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/heap/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/innobase/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/myisam/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/myisammrg/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/ndb/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/partition/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/storage/perfschema/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/audit_null/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/auth/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/daemon_example/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/fulltext/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/innodb_memcached/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/keyring/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/password_validation/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/replication_observers_example/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/rewrite_example/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/rewriter/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/semisync/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/test_service_sql_api/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/test_services/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/plugin/version_token/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/rapid/plugin/x/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/include/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/dbug/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/strings/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/vio/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/regex/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/mysys/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/mysys_ssl/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/libmysql/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/libbinlogevents/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/libbinlogstandalone/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/unittest/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/unittest/examples/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/unittest/mytap/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/unittest/mytap/t/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/unittest/gunit/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/extra/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/client/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/sql/share/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/libservices/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/testclients/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/sql/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/libmysqld/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/libmysqld/examples/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/scripts/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/mysql-test/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/mysql-test/lib/My/SafeProcess/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/support-files/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/packaging/rpm-oel/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/packaging/rpm-fedora/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/packaging/rpm-sles/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/packaging/rpm-docker/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/packaging/WiX/cmake_install.cmake")
  include("F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/packaging/solaris/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
