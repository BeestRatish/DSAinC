cmake_minimum_required(VERSION 3.0)
project(YourProjectName C)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED gtk4)

include_directories(${GTK4_INCLUDE_DIRS})
link_directories(${GTK4_LIBRARY_DIRS})
add_definitions(${GTK4_CFLAGS_OTHER})

add_executable(YourExecutableName main.c)
target_link_libraries(YourExecutableName ${GTK4_LIBRARIES})
