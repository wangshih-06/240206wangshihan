// main.cpp
#include <iostream>
#include "student.h"

int main()
{
    // 创建一个学生对象，使用 "张三李四" 作为 name
    Student stud1(007, "张三李四", 'm');
    stud1.display();  // 调用 display 方法

    return 0;
}
