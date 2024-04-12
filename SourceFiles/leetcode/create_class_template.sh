#!/bin/bash

set -eou pipefail

function to_upper_case() {
    input="$1"
    output=$(echo "$input" | tr '[:lower:]' '[:upper:]')
    echo "$output"
}

function to_snake_case() {
    input="$1"
    # Заменяем заглавные буквы на маленькие с префиксом '_'
    output=$(echo "$input" | sed -r 's/([A-Z])/ \1/g' | tr ' ' '_' | tr '[:upper:]' '[:lower:]')
    # Удаляем ведущий '_'
    output=${output#"_"}
    echo "$output"
}

function create_file() {
  local filename="$1"
  local content="$2"

  touch "$filename"
  echo "$content" >> "$filename"
}

function get_header_template() {
  local class_name="$1"
  local class_name_snake=$(to_snake_case "$class_name")
  local class_name_upper=$(to_upper_case "$class_name_snake")

  echo "\
#ifndef SOURCEFILES_LEETCODE_${class_name_upper}_H_
#define SOURCEFILES_LEETCODE_${class_name_upper}_H_

namespace LeetCode {

class ${class_name} {
 public:
  ${class_name}() = default;
  ${class_name}(const ${class_name} &) = default;
  ${class_name}(${class_name} &&) = default;

  auto operator=(const ${class_name} &) -> ${class_name} & = default;
  auto operator=(${class_name} &&) -> ${class_name} & = default;

  ~${class_name}() = default;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_${class_name_upper}_H_"
}

function get_cpp_template() {
  local header_filename="$1"

  echo "\
#include \"leetcode/${header_filename}\"

namespace LeetCode {}"
}

function get_header_test_template() {
  local class_name="$1"
  local class_name_snake=$(to_snake_case "$class_name")
  local class_name_upper=$(to_upper_case "$class_name_snake")

  echo "\
#ifndef SOURCEFILES_TEST_LEETCODE_${class_name_upper}_TEST_H_
#define SOURCEFILES_TEST_LEETCODE_${class_name_upper}_TEST_H_

#include <gtest/gtest.h>

namespace LeetCode::Test {

class ${class_name}Test : public ::testing::Test {};

}  // namespace LeetCode::Test

#endif  // SOURCEFILES_TEST_LEETCODE_${class_name_upper}_TEST_H_
"
}

function get_cpp_test_template() {
  local header_filename="$1";

  echo "\
#include \"leetcode/${header_filename}\"

namespace LeetCode::Test {}"
}

function main() {
  local class_name="$1"
  local file_prefix=$(to_snake_case "$class_name")

  local header_filename="${file_prefix}.h"
  local cpp_filename="${file_prefix}.cpp"

  local header_template=$(get_header_template "$class_name")
  local cpp_template=$(get_cpp_template "$header_filename")

  create_file "$header_filename" "$header_template"
  create_file "$cpp_filename" "$cpp_template"

  local header_test_filename="${file_prefix}_test.h"
  local cpp_test_filename="${file_prefix}_test.cpp"

  local header_test_template=$(get_header_test_template "$class_name")
  local cpp_test_template=$(get_cpp_test_template "$header_test_filename")

  local test_path="../test/leetcode"
  create_file "$test_path/$header_test_filename" "$header_test_template"
  create_file "$test_path/$cpp_test_filename" "$cpp_test_template"
}

main "$@"
