cmake_minimum_required(VERSION 3.17)

project(
    vsc_unittest
    VERSION 0.1
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file (GLOB SRC_FILES CONFIGURE_DEPENDS *.h *.cpp)
enable_testing() # enable ctest

add_executable (vsc_unittest ${SRC_FILES})

target_link_libraries(vsc_unittest PRIVATE 
                      gtest gmock)

include(GoogleTest)
gtest_discover_tests(vsc_unittest) # converts google-test-cases into ctest based test-cases.

#if (CMAKE_BUILD_TYPE STREQUAL "Coverage")
    SET(CMAKE_CXX_FLAGS "-g -O0 --coverage -fprofile-arcs")
    SET(CMAKE_C_FLAGS "-g -O0 --coverage -fprofile-arcs")
    
    # Create the gcov-clean target. This cleans the build as well as generated 
    # .gcda and .gcno files.
    add_custom_target(reset_coverage
        COMMAND rm -f ${OBJECT_DIR}/*.gcda
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )
#endif()