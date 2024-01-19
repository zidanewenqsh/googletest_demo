#include <gtest/gtest.h>
int add(int a, int b) {
    return a + b;
}

class AdditionParamTest : public ::testing::TestWithParam<std::tuple<int, int, int>> {
};

TEST_P(AdditionParamTest, ReturnsCorrectSum) {
    int a, b, expected_sum;
    std::tie(a, b, expected_sum) = GetParam();
    EXPECT_EQ(add(a, b), expected_sum);
}

INSTANTIATE_TEST_SUITE_P(
    Default, AdditionParamTest,
    ::testing::Values(
        std::make_tuple(1, 2, 3),
        std::make_tuple(10, 20, 30),
        std::make_tuple(-1, -1, -2)
    )
);
