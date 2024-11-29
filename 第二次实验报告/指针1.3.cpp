#include <iostream>
#include <cstring>  // 用于处理字符串相关函数，这里虽然示例代码中未明显用到，但实际更完善的处理字符串可能会用到

// 修正函数定义，添加正确的头文件引用和命名空间使用
void f(char* st, int i)
{
    st[i] = '\0';
    std::cout << st << std::endl;
    if (i > 1) f(st, i - 1);
}

int main()
{
    char st[] = "abcd";
    f(st, 4);

    return 0;
}