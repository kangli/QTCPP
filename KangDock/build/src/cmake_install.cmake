# Install script for directory: D:/VistualStudioLearn/QTCPP/KangDock/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/QtADS")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "D:/VistualStudioLearn/QTCPP/KangDock/src/ads_globals.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockAreaTabBar.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockAreaTitleBar.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockAreaTitleBar_p.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockAreaWidget.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockContainerWidget.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockManager.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockOverlay.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockSplitter.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockWidget.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockWidgetTab.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockingStateReader.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockFocusController.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/ElidingLabel.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/FloatingDockContainer.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/FloatingDragPreview.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/IconProvider.h"
    "D:/VistualStudioLearn/QTCPP/KangDock/src/DockComponentsFactory.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/license" TYPE FILE FILES
    "D:/VistualStudioLearn/QTCPP/KangDock/LICENSE"
    "D:/VistualStudioLearn/QTCPP/KangDock/gnu-lgpl-v2.1.md"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/lib/Debug/qtadvanceddocking.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/lib/Release/qtadvanceddocking.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/lib/MinSizeRel/qtadvanceddocking.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/lib/RelWithDebInfo/qtadvanceddocking.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/bin/Debug/qtadvanceddocking.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/bin/Release/qtadvanceddocking.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/bin/MinSizeRel/qtadvanceddocking.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/x64/bin/RelWithDebInfo/qtadvanceddocking.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking/adsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking/adsTargets.cmake"
         "D:/VistualStudioLearn/QTCPP/KangDock/build/src/CMakeFiles/Export/lib/cmake/qtadvanceddocking/adsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking/adsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking/adsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking" TYPE FILE FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/src/CMakeFiles/Export/lib/cmake/qtadvanceddocking/adsTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking" TYPE FILE FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/src/CMakeFiles/Export/lib/cmake/qtadvanceddocking/adsTargets-debug.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking" TYPE FILE FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/src/CMakeFiles/Export/lib/cmake/qtadvanceddocking/adsTargets-minsizerel.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking" TYPE FILE FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/src/CMakeFiles/Export/lib/cmake/qtadvanceddocking/adsTargets-relwithdebinfo.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking" TYPE FILE FILES "D:/VistualStudioLearn/QTCPP/KangDock/build/src/CMakeFiles/Export/lib/cmake/qtadvanceddocking/adsTargets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking" TYPE FILE FILES
    "D:/VistualStudioLearn/QTCPP/KangDock/src/qtadvanceddockingConfig.cmake"
    "D:/VistualStudioLearn/QTCPP/KangDock/build/src/qtadvanceddockingConfigVersion.cmake"
    )
endif()

