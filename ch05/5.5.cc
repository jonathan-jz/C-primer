//满足题意的程序如下所示：

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int grade;
    cout << "请输入您的成绩：" << endl;
    cin >> grade;
    if (grade < 0 || grade > 100) {
        cout << "该成绩不合法" << endl;
        return -1;
    }
    if (grade == 100) {                             // 处理满分的情况
        cout << "等级成绩是：" << "A++" << endl;
        return 0;
    }
    const vector<string> scores = {"F", "D", "C", "B", "A"};
    string lettergrade;
    // 如果成绩不合格，不需要考虑添加加号减号的问题
    if (grade < 60)
        lettergrade = scores[0];
    else {
        lettergrade = scores[(grade - 50) / 10];    // 获得字母形式的成绩
        if (grade != 100)       // 只要不是 A++，就考虑添加加号减号
            if (grade % 10 > 7)
                lettergrade += '+';     // 末尾是 8 或者 9 的成绩添加一个加号
            else if (grade % 10 < 3)
                lettergrade += '-';     // 末尾是 0、1 或者 2 的成绩添加一个减号
    }
    cout << "等级成绩是：" << lettergrade << endl;

    return 0;
}
// 测试样例一，运行结果
// 请输入您的成绩：
// 100
// 等级成绩是：A++

// Process finished with exit code 0

// // 测试样例二，运行结果
// 请输入您的成绩：
// 80
// 等级成绩是：B-

// Process finished with exit code 0
  
// // 测试样例三，运行结果
// 请输入您的成绩：
// 101
// 该成绩不合法

// Process finished with exit code 255
  
// // 测试样例四，运行结果
// 请输入您的成绩：
// 87
// 等级成绩是：B
