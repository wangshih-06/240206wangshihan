#include<iostream>
using namespace std;

int* f()
{
    // ʹ��new��̬���������ڴ�
    int* list = new int[4] {1, 2, 3, 4};
    return list;
}

int main()
{
    int* p = f();

    cout << p[0] << endl;
    cout << p[1] << endl;

    // ʹ���궯̬������ڴ��Ҫ�ǵ��ͷ�
    delete[] p;

    return 0;
}