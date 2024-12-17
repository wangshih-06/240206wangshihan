#include <iostream>
using namespace std;
// 定义学生类
class Student {
public:
    double score;   // 学生成绩
    int number;     // 学生学号

};
// 定义 max 函数,通过指针指向对象名称的方式来引入函数参数
void max(Student* student, int size)
{
    int maxIndex = 0;

    // 查找最高分学生
    for (int i = 1; i < size; i++) {
        if (student[i].score > student[maxIndex].score) {
            maxIndex = i;
        }
    }

    // 输出最高分学生的学号和成绩
    cout << "成绩最高的学生学号是: " << student[maxIndex].number
        << "，成绩是: " << student[maxIndex].score << endl;
}

int main() {
    // 定义5个学生对象并初始化
    Student students[5] = 
    {
        {85.5, 2401},
        {92.3, 2402},
        {78.9, 2403},
        {88.7, 2404},
        {91.2, 2405}
    };

    // 调用 max 函数
    max(students, 5);

    return 0;
}
