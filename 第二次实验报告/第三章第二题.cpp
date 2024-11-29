#include <iostream>
#include <iomanip>
using namespace std;
// 判断一个整数是否为素数的函数
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }//判断整数为1的时候既不属于素数也不属于合数的情况
    if (num <= 3) {
        return true;
    }//排除2和3均为素数的情况
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int count = 0;
    int num = 2;
    cout << "前200个素数如下：" << endl;

    while (count < 200) {
        if (is_prime(num)) {
            cout << setw(6) << num;
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }
    return 0;
}