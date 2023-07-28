#include "leetcode/integer_to_roman.h"

#include <cassert>

namespace LeetCode {

static auto NumberToRoman(int number) -> const char * {
  constexpr int kRomanI = 1;
  constexpr int kRomanIV = 4;
  constexpr int kRomanV = 5;
  constexpr int kRomanIX = 9;

  constexpr int kRomanX = 10;
  constexpr int kRomanXL = 40;
  constexpr int kRomanL = 50;
  constexpr int kRomanXC = 90;
  constexpr int kRomanC = 100;

  constexpr int kRomanCD = 400;
  constexpr int kRomanD = 500;
  constexpr int kRomanCM = 900;
  constexpr int kRomanM = 1000;

  if (number == kRomanI) {
    return "I";
  }
  if (number == kRomanV) {
    return "V";
  }
  if (number == kRomanX) {
    return "X";
  }
  if (number == kRomanL) {
    return "L";
  }
  if (number == kRomanC) {
    return "C";
  }
  if (number == kRomanD) {
    return "D";
  }
  if (number == kRomanM) {
    return "M";
  }
  if (number == kRomanIV) {
    return "IV";
  }
  if (number == kRomanIX) {
    return "IX";
  }
  if (number == kRomanXL) {
    return "XL";
  }
  if (number == kRomanXC) {
    return "XC";
  }
  if (number == kRomanCD) {
    return "CD";
  }
  if (number == kRomanCM) {
    return "CM";
  }
  return "";
}

auto IntegerToRoman::IntToRoman(int num) -> std::string {
  constexpr int kMinNumber = 1;
  constexpr int kMaxNumber = 3999;
  constexpr int kReserveSize = 16;

  constexpr int kStartPlace = 1000;
  constexpr int kPlaceStep = 10;
  constexpr int kRomanV = 5;

  assert(num >= kMinNumber && num <= kMaxNumber);

  std::string roman_nb;
  roman_nb.reserve(kReserveSize);

  std::string roman_place_value;
  roman_place_value.reserve(kReserveSize);

  for (int i = kStartPlace; i != 0; i /= kPlaceStep) {
    auto place_digit = num / i;
    if (place_digit == 0) {
      continue;
    }

    auto place_value = place_digit * i;
    roman_place_value = NumberToRoman(place_value);

    if (roman_place_value.empty()) {
      const auto *value = NumberToRoman(i);
      assert(value);

      int value_times = place_digit;

      if (value_times > kRomanV) {
        const auto *prefix = NumberToRoman(kRomanV * i);
        assert(prefix);
        roman_place_value += prefix;
        value_times -= kRomanV;
      }

      for (int j = 0; j < value_times; ++j) {
        roman_place_value += value;
      }
    }

    roman_nb += roman_place_value;
    num = num - place_value;
  }

  return roman_nb;
}

}  // namespace LeetCode
