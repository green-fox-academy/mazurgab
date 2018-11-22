#include <gtest/gtest.h>
#include "anagram.h"

std::string s1 = "lúd";
std::string s2 = "dúl";

TEST(sum_check, test_sum) {
    EXPECT_EQ(is_anagram(s1, s2), true);
}