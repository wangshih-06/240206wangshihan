#include<iostream>
using namespace std;
int main()
{
	double x;//定义自变量x
	double y;//定义因变量y
	cout << "请输入x的值:";//提示输入x的值
	cin >> x;//输入x的值
	if (x > 0 && x < 1)//如果0<x<1
	{
		y = 3 - (2 * x);//计算出y的值
		cout << "y=" << y << endl;//输出y的值
	}
	else if (x >= 1 && x < 5)//如果1<=x<5
	{
		y = 2 / (4 * x) + 1;//计算出y的值
		cout << "y=" << y << endl;//输出y的值
	}
	else if (x >= 5 && x < 10)//如果5=<x<10
	{
		y = x * x;//计算出y的值
		cout << "y=" << y << endl;//输出y的值
	}
	else//都不满足
	{
		cout << "您输入的x值不在定义域内" << endl;//不在定义域里
	}
	return 0;
}