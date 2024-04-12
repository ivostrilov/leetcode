#ifndef SOURCEFILES_ALGORITHM_BINARY_SEARCH_H_
#define SOURCEFILES_ALGORITHM_BINARY_SEARCH_H_

#include <iterator>
#include <stdexcept>
#include <string>

namespace Algorithm {

class BinarySearch final {
 public:
  BinarySearch() = default;
  BinarySearch(const BinarySearch &) = default;
  BinarySearch(BinarySearch &&) = default;

  auto operator=(const BinarySearch &) -> BinarySearch & = default;
  auto operator=(BinarySearch &&) -> BinarySearch & = default;

  ~BinarySearch() = default;

  template <typename ForwarIt, typename T>
  static auto Search(ForwarIt first, ForwarIt last, const T &value)
      -> ForwarIt {
    auto size = last - first;

    if (size == 0) {
      return last;
    }

    if (size == 1) {
      return *first == value ? first : last;
    }

    auto half = first;
    std::advance(half, size / 2);
    const auto &half_value = *half;

    if (half_value == value) {
      return half;
    }

    if (half_value < value) {
      return Search(half, last, value);
    }

    auto result = Search(first, half, value);
    return result != half ? result : last;
  }
};

}  // namespace Algorithm

#endif  // SOURCEFILES_ALGORITHM_BINARY_SEARCH_H_
