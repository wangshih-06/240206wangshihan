#include<iostream>
#include<cmath>//引入fabs所需头文件
using namespace std;
int main()
{
	double a, xn, xnp1;//定义a xn xn+1
	cout << "请输入a的值:";//提示输入a的值
	cin >> a;//输入a的值
	xn = a;//将a的值赋给x
	if (a >= 0)//如果a大于等于0 开方
	{
		for (; 1;)//死循环
		{
			xnp1 = (1.0 / 2) * (xn + (a / xn));//给xn+1赋值
			if (fabs(xnp1 - xn) < 0.00001)//fabs为绝对值 如果满足条件
			{
				cout << "a的平方根为" << xnp1;//输出当前xn+1(a的平方根)的值
				break;//退出循环
			}
			xn = xnp1;//将此次xn+1的值赋给下次的xn
		}
	}
	else//如果a小于0
	{
		cout << "开平方需要a>=0" << endl;//提示不能开方
	}
	return 0;
}