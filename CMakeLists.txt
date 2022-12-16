cmake_minimum_required(VERSION 3.0.0)
project(cppleetcode VERSION 0.1.0)

add_definitions("-Wall -g")
add_definitions(-std=c++14)

# include(CTest)
# enable_testing()

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

aux_source_directory(./src DIR_SRCS)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(cppleetcode main.cpp ${DIR_SRCS})

# target_link_libraries()
