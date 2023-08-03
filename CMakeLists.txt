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
  SourceFiles/leetcode/integer_to_roman.cpp
  SourceFiles/leetcode/integer_to_roman.h
  SourceFiles/leetcode/letter_combinations_of_a_phone_number.cpp
  SourceFiles/leetcode/letter_combinations_of_a_phone_number.h
  SourceFiles/leetcode/palindrome_number.cpp
  SourceFiles/leetcode/palindrome_number.h
  SourceFiles/leetcode/sum_closest.cpp
  SourceFiles/leetcode/sum_closest.h
  SourceFiles/leetcode/valid_parentheses.cpp
  SourceFiles/leetcode/valid_parentheses.h
  SourceFiles/leetcode/zigzag_conversion.cpp
  SourceFiles/leetcode/zigzag_conversion.h
)

set(
  test_src
  SourceFiles/test/leetcode/integer_to_roman_test.cpp
  SourceFiles/test/leetcode/integer_to_roman_test.h
  SourceFiles/test/leetcode/letter_combinations_of_a_phone_number_test.cpp
  SourceFiles/test/leetcode/letter_combinations_of_a_phone_number_test.h
  SourceFiles/test/leetcode/palindrome_number_test.cpp
  SourceFiles/test/leetcode/palindrome_number_test.h
  SourceFiles/test/leetcode/sum_closest_test.cpp
  SourceFiles/test/leetcode/sum_closest_test.h
  SourceFiles/test/leetcode/valid_parentheses_test.cpp
  SourceFiles/test/leetcode/valid_parentheses_test.h
  SourceFiles/test/leetcode/zigzag_conversion_test.cpp
  SourceFiles/test/leetcode/zigzag_conversion_test.h
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
