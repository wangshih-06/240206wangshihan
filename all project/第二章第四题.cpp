#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "�������һ������";
    cin >> num1;
    cout << "�������������+��-��*��/��%����";
    cin >> op;
    cout << "������ڶ�������";
    cin >> num2;

    double result;
    bool validOp = true;

    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "��������Ϊ 0��" << endl;
            validOp = false;
        }
        else {
            result = num1 / num2;
        }
        break;
    case '%':
        if (static_cast<int>(num2) == 0) {
            cout << "��������Ϊ 0��" << endl;
            validOp = false;
        }
        else {
            result = static_cast<int>(num1) % static_cast<int>(num2);
        }
        break;
    default:
        cout << "�Ƿ��������" << endl;
        validOp = false;
    }

    if (validOp) {
        cout << "���Ϊ��" << result << endl;
    }

    return 0;
}