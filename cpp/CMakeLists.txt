cmake_minimum_required(VERSION 3.11)
project(RobbersLanguageKata)

option(USE_GOOGLE_TEST "If to use google test" ON)

include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.10.0
)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

include(GoogleTest)

add_executable(robbers_language_test
        robbers_language.cc
        gtest_all.cpp)
target_link_libraries(robbers_language_test gtest gmock gtest_main)
target_compile_features(robbers_language_test PUBLIC cxx_std_11)
gtest_discover_tests(robbers_language_test)
