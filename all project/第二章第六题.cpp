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
    cout << "������������������";
    cin >> a >> b;
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);
    cout << "���Լ��Ϊ��" << greatestCommonDivisor << endl;
    cout << "��С������Ϊ��" << leastCommonMultiple << endl;
    return 0;
}