#include <gtest/gtest.h>

#include "Calculator.hpp"

TEST(Sum, ReturnsProperResult)
{
    Calculator calculator;
    int result = calculator.Sum(1, 2);

    EXPECT_EQ(3, result);
}
