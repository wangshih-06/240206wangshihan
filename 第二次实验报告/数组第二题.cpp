#include <iostream>
using namespace std;

// 交换两个元素的值的函数
void swap(double& a, double& b) {
    double t = a;
    a = b;
    b = t;
}

// 起泡排序函数
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    const int arraySize = 10;
    double numbers[arraySize];

    // 读入10个双精度数字
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < arraySize; i++) {
        cin >> numbers[i];
    }

    // 调用起泡排序函数
    bubbleSort(numbers, arraySize);

    // 显示排列后的数组
    cout << "排序后的数组：" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}