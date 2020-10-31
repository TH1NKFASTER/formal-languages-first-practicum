#include <gtest/gtest.h>
#include "RegularExpression.h"

TEST(FIRST_FROM_DOC, A_LETTER_CORRECT) {
  std::string regex = "a";
  RegularExpression expression(regex);
  bool answer = expression.ContainsWordWithDivisibleNumberOfGivenLetter('a', 2);
  EXPECT_EQ(answer, false);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}