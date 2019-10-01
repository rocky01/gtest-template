cmake_minimum_required(VERSION 3.1)

project(gtest-template)

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(TST_DIR "${CMAKE_CURRENT_SOURCE_DIR}/test")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ggdb3 -Wall -Wextra -Werror -Os")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -Wextra -Werror -Os")

enable_testing()
add_subdirectory(src)
add_subdirectory(test)
