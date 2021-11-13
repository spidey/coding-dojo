#include "gtest/gtest.h"
#include "fizzbuzz.hpp"

TEST(BasicTest, OneIsDifferentThanTwo) {
	EXPECT_NE(1, 2);
}

TEST(BasicTest, FizzOfOneisOne) {
	EXPECT_EQ(FizzBuzzLine(1), "1");
}

TEST(BasicTest, FizzOfNIsN) {
	EXPECT_EQ(FizzBuzzLine(2), "2");
}

TEST(BasicTest, FizzOfThreeIsFizz) {
	EXPECT_EQ(FizzBuzzLine(3), "FIZZ");
}

TEST(BasicTest, FizzOfFourIsFour) {
	EXPECT_EQ(FizzBuzzLine(4), "4");
}

TEST(BasicTest, FizzOfFiveIsBuzz) {
	EXPECT_EQ(FizzBuzzLine(5), "BUZZ");
}

TEST(BasicTest, FizzOfSixIsFizz) {
	EXPECT_EQ(FizzBuzzLine(6), "FIZZ");
}

TEST(BasicTest, FizzOf7Is7) {
	EXPECT_EQ(FizzBuzzLine(7), "7");
}

TEST(BasicTest, FizzOf15IsFIZZBUZZ)
{
	EXPECT_EQ(FizzBuzzLine(15), "FIZZBUZZ");
}

TEST(BasicTest, FizzBuzzOf2Is1)
{
	EXPECT_EQ(FizzBuzz(1), "1");
}

TEST(BasicTest, FizzBuzzOf2Is1_2)
{
	EXPECT_EQ(FizzBuzz(2), "1 2");
}

TEST(BasicTest, FizzBuzzOf3Is12FIZZ)
{
	EXPECT_EQ(FizzBuzz(3), "1 2 FIZZ");
}

TEST(BasicTest, FizzBuzzOf5Is12FIZZ4BUZZ)
{
	EXPECT_EQ(FizzBuzz(5), "1 2 FIZZ 4 BUZZ");
}

TEST(BasicTest, FizzBuzzOf15Is12FIZZ4BUZZFIZZ78FIZZBUZZ11FIZZ1314FIZZBUZZ)
{
	EXPECT_EQ(FizzBuzz(15), "1 2 FIZZ 4 BUZZ FIZZ 7 8 FIZZ BUZZ 11 FIZZ 13 14 FIZZBUZZ");
}

TEST(BasicTest, FizzBuzz16)
{
	EXPECT_EQ(FizzBuzz(16), "1 2 FIZZ 4 BUZZ FIZZ 7 8 FIZZ BUZZ 11 FIZZ 13 14 FIZZBUZZ 16");
}