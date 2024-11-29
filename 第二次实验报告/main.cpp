// 主函数的可执行程序
#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main() {
  cout << fixed << setprecision(2);//在这里是为了保留两位小数
    cout << "Celsius    Fahrenheit   |   Fahrenheit    Celsius" << endl;

    for (double c = 40.0, f = 120.0; c >= 31.0; --c, f -= 10.0) {
        double fah = celsius_to_fah(c);
        double cel = fahrenheit_to_cels(f);

        cout << setw(8) << c << "    " << setw(10) << fah
            << "   |   " << setw(10) << f << "    " << setw(10) << cel << endl;//此处设置能够按照题中所给的格式进行输出
    }

    return 0;
}
