#include <iostream>
#include "RegularExpression.h"

int main() {
  std::string s;
  char letter;
  size_t modulo;
  std::cin >> s >> letter >> modulo;
  try {
    RegularExpression regex(s);
    std::cout << (regex.ContainsWordWithDivisibleNumberOfGivenLetter(letter, modulo) ? "YES" : "NO");
  } catch (std::exception &exception) {
    std::cout << exception.what();
  }
}
