#include <iostream>
using namespace std;
// ����ѧ����
class Student {
public:
    double score;   // ѧ���ɼ�
    int number;     // ѧ��ѧ��

};
// ���� max ����,ͨ��ָ��ָ��������Ƶķ�ʽ�����뺯������
void max(Student* student, int size)
{
    int maxIndex = 0;

    // ������߷�ѧ��
    for (int i = 1; i < size; i++) {
        if (student[i].score > student[maxIndex].score) {
            maxIndex = i;
        }
    }

    // �����߷�ѧ����ѧ�źͳɼ�
    cout << "�ɼ���ߵ�ѧ��ѧ����: " << student[maxIndex].number
        << "���ɼ���: " << student[maxIndex].score << endl;
}

int main() {
    // ����5��ѧ�����󲢳�ʼ��
    Student students[5] = 
    {
        {85.5, 2401},
        {92.3, 2402},
        {78.9, 2403},
        {88.7, 2404},
        {91.2, 2405}
    };

    // ���� max ����
    max(students, 5);

    return 0;
}
