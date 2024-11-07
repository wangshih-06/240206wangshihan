#include <iostream>
using namespace std;

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    cout << "请输入一行字符：";
    while ((c = cin.get()) != '\n') { // 读取字符直到回车换行
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++; // 统计英文字母
        }
        else if (c == ' ') {
            spaces++; // 统计空格
        }
        else if (c >= '0' && c <= '9') {
            digits++; // 统计数字字符
        }
        else {
            others++; // 统计其他字符
        }
    }

    cout << "英文字母个数：" << letters << endl;
    cout << "空格个数：" << spaces << endl;
    cout << "数字字符个数：" << digits << endl;
    cout << "其他字符个数：" << others << endl;

    return 0;
}
