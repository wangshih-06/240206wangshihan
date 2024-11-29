#include<iostream>
using namespace std;

int* f()
{
    // 使用new动态分配数组内存
    int* list = new int[4] {1, 2, 3, 4};
    return list;
}

int main()
{
    int* p = f();

    cout << p[0] << endl;
    cout << p[1] << endl;

    // 使用完动态分配的内存后，要记得释放
    delete[] p;

    return 0;
}