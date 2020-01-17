#include "gtest/gtest.h"
#include "lib.h"

TEST(find_sum_fib, expected_sum_fib) {
    EXPECT_EQ(Fibbanachy(5), 8);
    EXPECT_EQ(Fibbanachy(6), 13);
    EXPECT_EQ(Fibbanachy(7), 21);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

