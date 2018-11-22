#include <gtest/gtest.h>
#include "sum.h"

std::vector<int>integers = {1, -3};

TEST(sum_check, test_sum) {
    EXPECT_EQ(sum(integers), 9);
}
TEST(sum_check, test_sumEmpty){
EXPECT_EQ(sum(integers), 0);
}

TEST(sum_check, test_sumOneElement){
    EXPECT_EQ(sum(integers), 1);
}

TEST(sum_check, test_sumNegative){
    EXPECT_EQ(sum(integers), -2);
}