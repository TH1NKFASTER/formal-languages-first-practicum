#include <string>

class RegularExpression {
public:
  explicit RegularExpression(const std::string& s);

  bool ContainsWordWithDivisibleNumberOfGivenLetter(char given_char, size_t modulo) const;

private:
    std::string reg_ex_;
};


