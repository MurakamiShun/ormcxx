cmake_minimum_required(VERSION 3.9)

include(GNUInstallDirs)

add_library(ormcxx_sqlite3 INTERFACE)
add_library(ormcxx::sqlite3 ALIAS ormcxx_sqlite3)

find_package(sqlite3 REQUIRED)

target_link_libraries(ormcxx_sqlite3 PRIVATE sqlite3)

target_include_directories(
    ormcxx_sqlite3
    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_sources(ormcxx_sqlite3 src/test.cpp)