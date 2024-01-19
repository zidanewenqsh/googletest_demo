#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "database.h"

class MockDatabase : public Database {
public:
    MOCK_METHOD(bool, login, (const std::string& username, const std::string& password), (override));
};

TEST(DatabaseTest, LoginSuccess) {
    MockDatabase mock_db;
    const std::string username = "user";
    const std::string password = "pass";

    // 设置期望：当 login 使用特定的用户名和密码被调用时，返回 true
    EXPECT_CALL(mock_db, login(username, password))
        .WillOnce(testing::Return(true));

    // 调用 login 方法并验证返回值
    bool result = mock_db.login(username, password);
    EXPECT_TRUE(result);
}

TEST(DatabaseTest, LoginFailure) {
    MockDatabase mock_db;
    const std::string username = "user";
    const std::string wrong_password = "wrong_pass";

    // 设置期望：当 login 使用错误的密码被调用时，返回 false
    EXPECT_CALL(mock_db, login(username, wrong_password))
        .WillOnce(testing::Return(false));

    // 调用 login 方法并验证返回值
    bool result = mock_db.login(username, wrong_password);
    EXPECT_FALSE(result);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
