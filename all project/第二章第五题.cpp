#include <iostream>
using namespace std;

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    cout << "������һ���ַ���";
    while ((c = cin.get()) != '\n') { // ��ȡ�ַ�ֱ���س�����
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++; // ͳ��Ӣ����ĸ
        }
        else if (c == ' ') {
            spaces++; // ͳ�ƿո�
        }
        else if (c >= '0' && c <= '9') {
            digits++; // ͳ�������ַ�
        }
        else {
            others++; // ͳ�������ַ�
        }
    }

    cout << "Ӣ����ĸ������" << letters << endl;
    cout << "�ո������" << spaces << endl;
    cout << "�����ַ�������" << digits << endl;
    cout << "�����ַ�������" << others << endl;

    return 0;
}
