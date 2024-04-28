cmake_minimum_required (VERSION 2.6)
project(densecrf)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

include_directories(include)

add_subdirectory (src)
add_subdirectory (external)

include(GenerateExportHeader)
generate_export_header(
    densecrf
    EXPORT_FILE_NAME ${CMAKE_CURRENT_SOURCE_DIR}/include/densecrf_export.h
    )

add_definitions(-Ddensecrf_EXPORTS)