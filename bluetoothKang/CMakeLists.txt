cmake_minimum_required(VERSION 3.14)

project(bluetoothKang LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 COMPONENTS Core5Compat REQUIRED)
find_package(Qt6 COMPONENTS Bluetooth REQUIRED)

add_executable(bluetoothKang
  main.cpp
  finddevice.h
  finddevice.cpp
#  bluetoothdevice.h
#  bluetoothdevice.cpp
)
target_link_libraries(bluetoothKang
    Qt6::Core
    Qt6::Core5Compat
    Qt6::Bluetooth
)
