#include <gtest/gtest.h>
#include "apple.h"

TEST(apple_check, test_apple){
EXPECT_EQ(getApple(), "apple");
}