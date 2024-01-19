#include <gtest/gtest.h>
#include <stack>
class StackTest : public ::testing::Test {
protected:
    std::stack<int> stack;

    void SetUp() override {
        stack.push(1);
        stack.push(2);
        stack.push(3);
    }
};

TEST_F(StackTest, IsNotEmpty) {
    EXPECT_FALSE(stack.empty());
}

TEST_F(StackTest, PopValue) {
    stack.pop();
    EXPECT_EQ(stack.top(), 2);
}
