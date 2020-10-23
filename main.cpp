#include <iostream>
#include "RegularExpression.h"

int main() {
  std::string s;
  char letter;
  size_t modulo;
  std::cin >> s >> letter >> modulo;
  RegularExpression regex(s);
  std::cout << (regex.ContainsWordWithDivisibleNumberOfGivenLetter(letter, modulo) ? "YES" : "NO");
}
