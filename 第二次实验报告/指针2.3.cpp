#include <iostream>
using namespace std;
// 函数声明：对数组进行升序排序
void sortArray(int* arr, int size);

int main() {
    int size;

    // 动态输入数组大小
    cout << "请输入数组元素的个数: ";
    cin >> size;

    // 动态分配数组
    int* arr = new int[size];

    // 输入数组元素
    cout << "请输入 " << size << " 个数组元素:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // 调试：查看指针和指针指向内容
    cout << "\n调试信息：" << endl;
    cout << "数组首地址: " << arr << endl;
    cout << "数组内容: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // 对数组进行排序
    sortArray(arr, size);

    // 使用指针方式输出排序后的数组元素
    cout << "\n排序后的数组元素: ";
    for (int* p = arr; p < arr + size; p++) {
        cout << *p << " ";
    }
    cout << endl;

    // 释放动态分配的内存
    delete[] arr;

    return 0;
}

// 对数组进行由小到大的排序
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // 交换两个元素
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
