#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double radius, height;
    cout << "请输入圆锥底面半径：";
    cin >> radius;
    cout << "请输入圆锥的高：";
    cin >> height;
    double volume = PI * radius * radius * height / 3;
    cout << "圆锥的体积为：" << volume << endl;
    return 0;
}