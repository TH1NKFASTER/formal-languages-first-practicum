#include "RegularExpression.h"
#include "MySet.h"
#include <stack>

class RegularExpression::ERROR : public std::exception {
    [[nodiscard]] const char *what() const noexcept override {
      return "ERROR";
    }
};

RegularExpression::RegularExpression(std::string s) : reg_ex_(std::move(s)) {

}

bool RegularExpression::ContainsWordWithDivisibleNumberOfGivenLetter(char given_char, size_t modulo) const {
  std::stack<MySet> stack;
  for (auto &c : reg_ex_) {
    if (c == given_char) {
      MySet new_top(modulo);
      new_top.Insert(1);
      stack.push(new_top);
    } else if (c == '.') {
      if (stack.size() < 2) {
        throw ERROR();
      }
      MySet first_operand = stack.top();
      stack.pop();
      MySet second_operand = stack.top();
      stack.pop();
      stack.push(SetConcatenate(first_operand, second_operand));
    } else if (c == '+') {
      if (stack.size() < 2) {
        throw ERROR();
      }
      MySet first_operand = stack.top();
      stack.pop();
      MySet second_operand = stack.top();
      stack.pop();
      stack.push(SetUnion(first_operand, second_operand));
    } else if (c == '*') {
      if (stack.empty()) {
        throw ERROR();
      }
      MySet operand = stack.top();
      stack.pop();
      stack.push(operand.SetKleeneStar());
    } else {
      MySet new_top(modulo);
      new_top.Insert(0);
      stack.push(new_top);
    }
  }
  if (stack.size() != 1) {
    throw ERROR();
  }
  return stack.top().Contains(0);
}