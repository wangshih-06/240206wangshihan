// student.h
#ifndef STUDENT_H  // 防止重复包含
#define STUDENT_H

class Student
{
public:
    // 构造函数声明
    Student(int n = 0, const char* nm = "tcg", char s = 'm');

    // 公用成员函数声明
    void display();

private:
    int num;
    char name[20];  // 保证足够大以容纳 "张三李四" 字符串
    char sex;
};

#endif // STUDENT_H


