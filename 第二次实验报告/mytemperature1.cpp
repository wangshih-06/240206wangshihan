//调用头文件
#include "mytemperature.h"
// 摄氏温度到华氏温度函数的定义
double celsius_to_fah(double cel) {
    return cel * 9.0 / 5.0 + 32.0;
}

// 华氏温度到摄氏温度函数的定义
double fahrenheit_to_cels(double fah) {
    return (fah - 32.0) * 5.0 / 9.0;
}
