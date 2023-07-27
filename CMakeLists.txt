cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17 REQUIRED)

project(leet-code)

#-------------------------------------------------------------------------------
# Dependencies
#-------------------------------------------------------------------------------

if (
  NOT DEFINED ENV{GTEST_DIR}
)
  message(
    FATAL_ERROR
    "
      Some variables are empty:
      Variable 'ENV{GTEST_DIR}': '$ENV{GTEST_LIB_DIR}'
    "
  )
else ()
  message(
    STATUS
    "
      Using GTest from: '$ENV{GTEST_DIR}'
    "
  )
  set(
    third_party_libs_paths
    $ENV{GTEST_DIR}
  )
endif ()

set(
  CMAKE_PREFIX_PATH
  ${CMAKE_PREFIX_PATH}
  ${third_party_libs_paths}
)

find_package(GTest REQUIRED)

set(
  third_party_libs
  GTest::gtest_main
  GTest::gmock_main
)

#-------------------------------------------------------------------------------
# Sources
#-------------------------------------------------------------------------------

set(
  leetcode_src
  SourceFiles/leetcode/valid_parentheses.cpp
  SourceFiles/leetcode/valid_parentheses.h
)

set(
  test_src
  SourceFiles/test/leetcode/valid_parentheses_test.cpp
  SourceFiles/test/leetcode/valid_parentheses_test.h
)

#-------------------------------------------------------------------------------
# Target
#-------------------------------------------------------------------------------

set(target leet-code-tests)

add_executable(
  ${target}
  ${leetcode_src}
  ${test_src}
  SourceFiles/main.cpp
)

target_include_directories(
  ${target}
  PRIVATE
  SourceFiles
  SourceFiles/test
)

target_link_libraries(
  ${target}
  PRIVATE
  ${third_party_libs}
)
