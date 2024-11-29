#include <iostream>
using namespace std;
// 合并两个已排序数组的函数
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    // 比较两个数组的元素并将较小的放入新数组list3中
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    // 如果list1还有剩余元素，将它们添加到list3
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    // 如果list2还有剩余元素，将它们添加到list3
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}
int main() {
    const int MAX_SIZE = 80;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];
    int size1, size2;
    // 输入第一个已排序数组
    cout << "Enter the size of the first sorted array: ";
    cin >> size1;
    cout << "Enter the first sorted array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }
    // 输入第二个已排序数组
    cout << "Enter the size of the second sorted array: ";
    cin >> size2;
    cout << "Enter the second sorted array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }
    // 合并两个数组
    merge(list1, size1, list2, size2, list3);
    // 输出合并后的数组
    cout << "The merged array is: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}