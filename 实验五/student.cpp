// student.cpp
#include <iostream>
#include "student.h"
#include <cstring>  // ���� strncpy

Student::Student(int n, const char* nm, char s)
{
    num = n;
    name[sizeof(name) - 1] = '\0';  // ȷ���ַ����� '\0' ��β
    sex = s;
}

void Student::display()
{
    std::cout << "num: " << num << std::endl;
    std::cout << "name:"<<name << std:: endl;
    std::cout << "sex: " << sex << std::endl;
}
