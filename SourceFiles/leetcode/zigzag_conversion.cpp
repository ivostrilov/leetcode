#include "leetcode/zigzag_conversion.h"

#include <iostream>
#include <vector>

namespace LeetCode {

static void PrintMatrix(const std::vector<char> &matrix, int columns) {
  for (int i = 0; i < matrix.size(); ++i) {
    if (i != 0 && i % columns == 0) {
      std::cout << '\n';
    }

    auto symbol = matrix.at(i);
    std::cout << (symbol == '\0' ? '#' : symbol);
  }

  std::cout << std::endl;
}

// 14 symbols
// 3 rows
// PAYPALISHIRING -> P   A   H   N
//                   A P L S I I G
//                   Y   I   R

// 14 symbols
// 4 rows
// PAYPALISHIRING -> P     I    N
//                   A   L S  I G
//                   Y A   H R
//                   P     I

auto ZigzagConversion::Convert(const std::string &string, int num_rows)
    -> std::string {
  constexpr int kMaxStringSize = 1000;
  constexpr int kMinStringSize = 1;
  constexpr int kMaxRows = 1000;
  constexpr int kMinRows = 1;
  constexpr int kReserveSize = 128;

  assert(string.size() >= kMinStringSize && string.size() <= kMaxStringSize);
  assert(num_rows >= kMinRows && num_rows <= kMaxRows);

  const auto matrix_columns_amount = string.size();

  std::vector<char> matrix;
  matrix.resize(num_rows * matrix_columns_amount);

  std::string converted;
  converted.reserve(kReserveSize);

  bool zigzag = false;
  int matrix_current_row = 0;
  int matrix_current_column = 0;

  for (char symbol : string) {
    auto index =
        matrix_current_row * matrix_columns_amount + matrix_current_column;

    assert(index < matrix.size());
    matrix[index] = symbol;

    ++matrix_current_row;

    if (matrix_current_row == num_rows) {
      zigzag = true;
    }

    if (zigzag) {
      matrix_current_row = (num_rows > 1) ? matrix_current_row - 2 : 0;
      ++matrix_current_column;

      if (matrix_current_row == 0) {
        zigzag = false;
      }
    }
  }

  PrintMatrix(matrix, static_cast<int>(matrix_columns_amount));

  for (auto symbol : matrix) {
    if (symbol != '\0') {
      converted.push_back(symbol);
    }
  }

  std::cout << std::endl;

  return converted;
}

}  // namespace LeetCode
