// student.cpp
#include <iostream>
#include "student.h"
#include <cstring>  // 用于 strncpy

Student::Student(int n, const char* nm, char s)
{
    num = n;
    name[sizeof(name) - 1] = '\0';  // 确保字符串以 '\0' 结尾
    sex = s;
}

void Student::display()
{
    std::cout << "num: " << num << std::endl;
    std::cout << "name:"<<name << std:: endl;
    std::cout << "sex: " << sex << std::endl;
}
