// student.h
#ifndef STUDENT_H  // ��ֹ�ظ�����
#define STUDENT_H

class Student
{
public:
    // ���캯������
    Student(int n = 0, const char* nm = "tcg", char s = 'm');

    // ���ó�Ա��������
    void display();

private:
    int num;
    char name[20];  // ��֤�㹻�������� "��������" �ַ���
    char sex;
};

#endif // STUDENT_H


