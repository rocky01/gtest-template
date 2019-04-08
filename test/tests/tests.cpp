#include "gtest/gtest.h"
#include "gmock/gmock.h"


TEST(Test, AssertTrue)
{
    ASSERT_TRUE(true);
}

TEST(Test, Assert10)
{
    ASSERT_TRUE(10 == 10);
}
