#include <string>

class RegularExpression {
public:
  explicit RegularExpression(const std::string& s);

  bool ContainsWordWithDivisibleNumberOfGivenLetter(char c, size_t modulo);

private:
    std::string reg_ex_;
};


