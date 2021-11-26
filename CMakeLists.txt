cmake_minimum_required(VERSION 3.17)
include(GoogleTest)
include(FetchContent)

project(coding_dojo LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

add_library(dojolib
    src/file1.cpp
)
target_include_directories(dojolib PUBLIC include)

add_executable(dojo main.cpp)
target_link_libraries(dojo PRIVATE dojolib)

enable_testing()
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/master.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(dojotest test/main.cpp)
target_link_libraries(dojotest PRIVATE dojolib gtest_main)
gtest_discover_tests(dojotest)
