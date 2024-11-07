#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double fa;//定义华氏温度
	cout << "请输入华氏温度" << endl;
	cin >> fa;
	double ce=(fa-32)*5/9;//定义摄氏温度
	cout << fixed << setprecision(2) << "摄氏温度为：" << ce << endl;



		return 0;
}