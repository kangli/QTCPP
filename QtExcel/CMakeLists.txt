cmake_minimum_required(VERSION 3.5)

project(QtExcel VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets)
#find_package(Qt6 REQUIRED COMPONENTS AxContainer)


add_subdirectory(QXlsx)

if(NOT DEFINED ${QXLSX_PARENTPATH})
        set(QXLSX_PARENTPATH ${CMAKE_CURRENT_SOURCE_DIR}/)
endif(NOT DEFINED ${QXLSX_PARENTPATH})

if(NOT DEFINED ${QXLSX_HEADERPATH})
        set(QXLSX_HEADERPATH ${CMAKE_CURRENT_SOURCE_DIR}/QXlsx/header/)
endif(NOT DEFINED ${QXLSX_HEADERPATH})

if(NOT DEFINED ${QXLSX_SOURCEPATH})
        set(QXLSX_SOURCEPATH ${CMAKE_CURRENT_SOURCE_DIR}/QXlsx/source/)
endif(NOT DEFINED ${QXLSX_SOURCEPATH})

include_directories(${QXLSX_HEADERPATH})

file(GLOB QXLSX_CPP "${QXLSX_SOURCEPATH}/*.cpp")
file(GLOB QXLSX_H "${QXLSX_HEADERPATH}/*.h")

set(SRC_FILES ${QXLSX_CPP})
list(APPEND SRC_FILES ${QXLSX_H})
list(APPEND SRC_FILES
    ${CMAKE_SOURCE_DIR}/android/AndroidManifest.xml
    ${CMAKE_SOURCE_DIR}/android/build.gradle
        ${CMAKE_SOURCE_DIR}/android/gradle/wrapper/gradle-wrapper.jar
        ${CMAKE_SOURCE_DIR}/android/gradle/wrapper/gradle-wrapper.properties
        ${CMAKE_SOURCE_DIR}/android/gradlew
        ${CMAKE_SOURCE_DIR}/android/gradlew.bat
        ${CMAKE_SOURCE_DIR}/android/res/values/libs.xml
)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h
        mainwindow.ui
        filterwidget.h filterwidget.cpp
        mysortfilterproxymodel.h mysortfilterproxymodel.cpp
        ${SRC_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(QtExcel
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET QtExcel APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        set(ANDROID_PACKAGE_SOURCE_DIR ${CMAKE_SOURCE_DIR}/android CACHE INTERNAL "")
        add_library(QtExcel SHARED
            ${PROJECT_SOURCES}
            ${ANDROID_PACKAGE_SOURCE_DIR}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(QtExcel
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(QtExcel PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt6::Core
    Qt6::GuiPrivate)
#target_link_libraries(QtExcel PRIVATE Qt6::AxContainer)
#target_link_libraries(QtExcel PRIVATE Qt6::AxContainer)

set_target_properties(QtExcel PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(QtExcel)
endif()
