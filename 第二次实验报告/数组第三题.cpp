#include<iostream>
using namespace std;

int main()
{
    //����һ���������������жϴ����Ŀ������
    bool arr[100] = { false };//�������ڹ̶������Ϊ�ر�״̬

    for (int student = 1; student <= 100; ++student) {
        for (int i = student - 1; i < 100; i += student) {
            arr[i] = !arr[i];
        }
    }

    for (int i = 0; i < 100; ++i) {
        if (arr[i]) {
            cout << (i + 1) << " ";//�����Ӧ�ı��
        }
    }
    cout << endl;
    return 0;
}