#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);
    cout << "最大公约数为：" << greatestCommonDivisor << endl;
    cout << "最小公倍数为：" << leastCommonMultiple << endl;
    return 0;
}