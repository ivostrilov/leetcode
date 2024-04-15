cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17 REQUIRED)

project(leet-code)

#-------------------------------------------------------------------------------
# Dependencies
#-------------------------------------------------------------------------------

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
  alpgorithm_src
  SourceFiles/algorithm/binary_search.h
)

set(
  leetcode_src
  SourceFiles/leetcode/generate_parentheses.cpp
  SourceFiles/leetcode/generate_parentheses.h
  SourceFiles/leetcode/integer_to_roman.cpp
  SourceFiles/leetcode/integer_to_roman.h
  SourceFiles/leetcode/letter_combinations_of_a_phone_number.cpp
  SourceFiles/leetcode/letter_combinations_of_a_phone_number.h
  SourceFiles/leetcode/merge_two_sorted_lists.h
  SourceFiles/leetcode/merge_two_sorted_lists.cpp
  SourceFiles/leetcode/palindrome_number.cpp
  SourceFiles/leetcode/palindrome_number.h
  SourceFiles/leetcode/remove_nth_node_from_end_of_list.cpp
  SourceFiles/leetcode/remove_nth_node_from_end_of_list.h
  SourceFiles/leetcode/sum_4.cpp
  SourceFiles/leetcode/sum_4.h
  SourceFiles/leetcode/sum_closest.cpp
  SourceFiles/leetcode/sum_closest.h
  SourceFiles/leetcode/valid_parentheses.cpp
  SourceFiles/leetcode/valid_parentheses.h
  SourceFiles/leetcode/zigzag_conversion.cpp
  SourceFiles/leetcode/zigzag_conversion.h
)

set(
  test_src
  SourceFiles/test/algorithm/binary_search_test.cpp
  SourceFiles/test/algorithm/binary_search_test.h
  SourceFiles/test/leetcode/generate_parentheses_test.cpp
  SourceFiles/test/leetcode/generate_parentheses_test.h
  SourceFiles/test/leetcode/integer_to_roman_test.cpp
  SourceFiles/test/leetcode/integer_to_roman_test.h
  SourceFiles/test/leetcode/letter_combinations_of_a_phone_number_test.cpp
  SourceFiles/test/leetcode/letter_combinations_of_a_phone_number_test.h
  SourceFiles/test/leetcode/merge_two_sorted_lists_test.h
  SourceFiles/test/leetcode/merge_two_sorted_lists_test.cpp
  SourceFiles/test/leetcode/palindrome_number_test.cpp
  SourceFiles/test/leetcode/palindrome_number_test.h
  SourceFiles/test/leetcode/remove_nth_node_from_end_of_list_test.cpp
  SourceFiles/test/leetcode/remove_nth_node_from_end_of_list_test.h
  SourceFiles/test/leetcode/sum_4_test.cpp
  SourceFiles/test/leetcode/sum_4_test.h
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
  ${alpgorithm_src}
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
