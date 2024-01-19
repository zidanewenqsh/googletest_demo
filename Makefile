# 定义编译器
CXX := g++

# 定义编译器标志
CXXFLAGS := -Wall -g

# 定义gtest相关的标志
GTEST_FLAGS := -lgtest -lgtest_main -pthread

# 定义所有的目标文件
TARGETS := addition_test stack_test addition_param_test mock_database_test

# 默认目标
all: $(TARGETS)

# 为每个测试编写编译规则
addition_test: addition_test.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(GTEST_FLAGS)

stack_test: stack_test.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(GTEST_FLAGS)

addition_param_test: addition_param_test.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(GTEST_FLAGS)

mock_database_test: mock_database_test.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(GTEST_FLAGS) -lgmock

# 清理规则
clean:
	rm -f $(TARGETS)

# 声明伪目标
.PHONY: all clean
