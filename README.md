# googletest_demo
我练习googletest的项目

# Google Test 示例集合
这个仓库包含了四个使用 Google Test 框架的 C++ 测试案例。这些示例演示了基础测试、参数化测试、使用测试夹具以及模拟对象的使用。

## 测试案例
1. 基本测试 - Addition Test
addition_test.cpp 包含了一个简单的 add 函数，该函数实现了两个整数的加法，并有对应的基本测试案例。

2. 参数化测试 - AdditionParam Test
addition_param_test.cpp 展示了参数化测试的使用。它对 add 函数使用了不同的输入组合进行测试。

3. 使用测试夹具 - Stack Test
stack_test.cpp 使用了测试夹具来测试 std::stack<int> 的行为。这个示例展示了如何设置测试前的初始条件。

4. 使用Mock对象 - MockDatabase Test
mock_database_test.cpp 演示了如何使用模拟对象（Mock Object）来测试类的行为，而无需依赖真实的类实现。

## 编译与运行
要编译和运行这些测试，您需要安装 Google Test 框架。请确保的系统中已安装 Google Test，并在系统路径中可用。

### 编译步骤
1. 克隆仓库：

```bash
git clone https://github.com/zidanewenqsh/googletest_demo.git
cd googletest_demo
```
2. 编译测试：
使用 Makefile 或其他编译脚本编译测试。
```bash
make
```
### 运行测试
编译完成后，直接运行生成的可执行文件来执行测试。

```bash
./addition_test
./addition_param_test
./stack_test
./mock_database_test
```