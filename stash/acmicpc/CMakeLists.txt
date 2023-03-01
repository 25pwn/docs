cmake_minimum_required(VERSION 3.0.0)
project(acmicpc VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(acmicpc 20191_.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
set(CMAKE_CXX_FLAGS "-O0 -std=c++20 -Wall -Wextra -pedantic")
# -Wall -Wextra -Werror -pedantic 