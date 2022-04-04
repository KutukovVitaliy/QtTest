cmake_minimum_required(VERSION 3.21)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

project(QtTest)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_PREFIX_PATH "/home/kvit/Qt/5.15.0/gcc_64/lib/cmake")

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(QtTest main.cpp Printer.h)
target_link_libraries(QtTest Qt5::Core Qt5::Gui Qt5::Widgets)
