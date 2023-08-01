#ifndef SOURCEFILES_LEETCODE_ZIGZAG_CONVERSION_H_
#define SOURCEFILES_LEETCODE_ZIGZAG_CONVERSION_H_

#include <string>

namespace LeetCode {

class ZigzagConversion final {
 public:
  ZigzagConversion() = default;
  ZigzagConversion(const ZigzagConversion &) = default;
  ZigzagConversion(ZigzagConversion &&) = default;

  auto operator=(const ZigzagConversion &) -> ZigzagConversion & = default;
  auto operator=(ZigzagConversion &&) -> ZigzagConversion & = default;

  ~ZigzagConversion() = default;

  static auto Convert(const std::string &string, int num_rows) -> std::string;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_ZIGZAG_CONVERSION_H_
