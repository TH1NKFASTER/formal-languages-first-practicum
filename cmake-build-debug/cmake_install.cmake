# Install script for directory: /Users/maksimdolgov/CLionProjects/formal_languages_practicum

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/Test")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin" TYPE EXECUTABLE FILES "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/cmake-build-debug/Test")
  if(EXISTS "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/Test" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/Test")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin"
      "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/Test")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Users/maksimdolgov/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -u -r "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/Test")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/formal_languages_practicum")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin" TYPE EXECUTABLE FILES "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/cmake-build-debug/formal_languages_practicum")
  if(EXISTS "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/formal_languages_practicum" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/formal_languages_practicum")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin"
      "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/formal_languages_practicum")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Users/maksimdolgov/Downloads/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -u -r "$ENV{DESTDIR}/Users/maksimdolgov/CLionProjects/formal_languages_practicum/bin/formal_languages_practicum")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/maksimdolgov/CLionProjects/formal_languages_practicum/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
