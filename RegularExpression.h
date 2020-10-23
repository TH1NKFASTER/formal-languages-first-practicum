#include <string>

class RegularExpression {
public:
    explicit RegularExpression(std::string s);

    [[nodiscard]] bool ContainsWordWithDivisibleNumberOfGivenLetter(char given_char, size_t modulo) const;

private:
    std::string reg_ex_;
};


