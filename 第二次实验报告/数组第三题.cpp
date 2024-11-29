#include<iostream>
using namespace std;

int main()
{
    //设置一个布尔类型数组判断储物柜的开闭情况
    bool arr[100] = { false };//这里用于固定储物柜为关闭状态

    for (int student = 1; student <= 100; ++student) {
        for (int i = student - 1; i < 100; i += student) {
            arr[i] = !arr[i];
        }
    }

    for (int i = 0; i < 100; ++i) {
        if (arr[i]) {
            cout << (i + 1) << " ";//输出对应的编号
        }
    }
    cout << endl;
    return 0;
}