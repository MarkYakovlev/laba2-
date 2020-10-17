#include "pch.h"
#include "../laba 2 pro/function.cpp"
TEST(glasn, glasntest) {
  EXPECT_EQ(func("fhbkgjns", "AEYOUI"), 0);
  EXPECT_EQ(func("afdghjkls", "AEYOUI"), 1);
  EXPECT_EQ(func("ihplkjhbvc", "AEYOUI"), 1);
  EXPECT_EQ(func("okjnbnzm", "AEYOUI"), 1);
}