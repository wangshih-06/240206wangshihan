#include <iostream>
using namespace std;
// �ϲ���������������ĺ���
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    // �Ƚ����������Ԫ�ز�����С�ķ���������list3��
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    // ���list1����ʣ��Ԫ�أ���������ӵ�list3
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    // ���list2����ʣ��Ԫ�أ���������ӵ�list3
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}
int main() {
    const int MAX_SIZE = 80;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];
    int size1, size2;
    // �����һ������������
    cout << "Enter the size of the first sorted array: ";
    cin >> size1;
    cout << "Enter the first sorted array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }
    // ����ڶ�������������
    cout << "Enter the size of the second sorted array: ";
    cin >> size2;
    cout << "Enter the second sorted array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }
    // �ϲ���������
    merge(list1, size1, list2, size2, list3);
    // ����ϲ��������
    cout << "The merged array is: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}