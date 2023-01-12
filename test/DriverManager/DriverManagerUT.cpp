#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../../main/DriverManager/DriverManager.hpp"

class DriverManagerTest : public ::testing::Test
{
protected:
};

TEST_F(DriverManagerTest, SanityCheck)
{
    EXPECT_TRUE(true);
}