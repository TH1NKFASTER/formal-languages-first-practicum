#include "RegularExpression.h"
#include "MySet.h"
#include <stack>

RegularExpression::RegularExpression(const std::string &s) : reg_ex_(s) {

}

bool RegularExpression::ContainsWordWithDivisibleNumberOfGivenLetter(char given_char, size_t modulo) const {
  std::stack<MySet> stack;
  for (auto &c : reg_ex_) {
    if (c == given_char) {
      MySet new_top(modulo);
      new_top.Insert(1);
      stack.push(new_top);
    } else if (c == '.') {
      MySet first_operand = stack.top();
      stack.pop();
      MySet second_operand = stack.top();
      stack.pop();
      stack.push(SetConcatenate(first_operand, second_operand));
    } else if (c == '+') {
      MySet first_operand = stack.top();
      stack.pop();
      MySet second_operand = stack.top();
      stack.pop();
      stack.push(SetUnion(first_operand, second_operand));
    } else if (c == '*') {
      MySet operand = stack.top();
      stack.pop();
      stack.push(operand.SetKleeneStar());
    } else {
      MySet new_top(modulo);
      new_top.Insert(0);
      stack.push(new_top);
    }
  }
  return stack.top().Contains(0);
}
