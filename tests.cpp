#include <gtest/gtest.h>
#include "RegularExpression.h"

TEST(FIRST, INCORRECT) {
  std::string regex = "a";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2);
  EXPECT_EQ(answer, false);
}

TEST(SECOND, CORRECT) {
  std::string regex = "a";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('b', 2);
  EXPECT_EQ(answer, true);
}

TEST(THIRD, CORRECT) {
  std::string regex = "a";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('c', 2);
  EXPECT_EQ(answer, true);
}

TEST(FOURTH, CORRECT) {
  std::string regex = "aa.";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2);
  EXPECT_EQ(answer, true);
}

TEST(FIFTH, CORRECT) {
  std::string regex = "aa.";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('b', 2);
  EXPECT_EQ(answer, true);
}

TEST(SIXTH, CORRECT) {
  std::string regex = "aa.";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('c', 2);
  EXPECT_EQ(answer, true);
}

TEST(SEVENTH, INCORRECT) {
  std::string regex = "aa.*a.";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2);
  EXPECT_EQ(answer, false);
}

TEST(EIGHTH, CORRECT) {
  std::string regex = "ab+c.aba.*.bac.+.+*";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2);
  EXPECT_EQ(answer, true);
}

TEST(NINTH, CORRECT) {
  std::string regex = "aba.*.a.*ab1+..";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2);
  EXPECT_EQ(answer, true);
}

TEST(TENTH, ERROR) {
  std::string regex = "a.";
  RegularExpression expression(regex);
  ASSERT_ANY_THROW(expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2););
}

TEST(ELEVENTH, ERROR) {
  std::string regex = "aa";
  RegularExpression expression(regex);
  ASSERT_ANY_THROW(expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2););
}

TEST(TWELFTH, CORRECT) {
  std::string regex = "a*";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 3000);
  EXPECT_EQ(answer, true);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}