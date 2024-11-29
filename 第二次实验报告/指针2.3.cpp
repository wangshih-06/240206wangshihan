#include <iostream>
using namespace std;
// ���������������������������
void sortArray(int* arr, int size);

int main() {
    int size;

    // ��̬���������С
    cout << "����������Ԫ�صĸ���: ";
    cin >> size;

    // ��̬��������
    int* arr = new int[size];

    // ��������Ԫ��
    cout << "������ " << size << " ������Ԫ��:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // ���ԣ��鿴ָ���ָ��ָ������
    cout << "\n������Ϣ��" << endl;
    cout << "�����׵�ַ: " << arr << endl;
    cout << "��������: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // �������������
    sortArray(arr, size);

    // ʹ��ָ�뷽ʽ�������������Ԫ��
    cout << "\n����������Ԫ��: ";
    for (int* p = arr; p < arr + size; p++) {
        cout << *p << " ";
    }
    cout << endl;

    // �ͷŶ�̬������ڴ�
    delete[] arr;

    return 0;
}

// �����������С���������
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // ��������Ԫ��
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
