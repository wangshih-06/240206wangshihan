#include <iostream>
using namespace std;

class Time {
private:  // 数据成员改为私有
    int hour;
    int minute;
    int sec;

public:
    // 设置成员函数，用于输入时间
    void inputtime() {
        cout << "请输入时间（小时 分钟 秒）：";
        cin >> hour >> minute >> sec;
    }

    // 设置成员函数，用于输出时间
    void output() {
        cout << hour << "：" << minute << "：" << sec << endl;
    }
};

int main() {
    Time t1;  // 创建Time类对象

    t1.inputtime();  // 调用成员函数进行输入
    t1.output();  // 调用成员函数进行输出

    return 0;
}
