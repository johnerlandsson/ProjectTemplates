cmake_minimum_required(VERSION 3.2)
project(qtexectest)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)

set(${PROJECT_NAME}_src main.cpp mainwindow.cpp)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_src})

qt5_use_modules(${PROJECT_NAME} Widgets)
