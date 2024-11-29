#include<iostream>
using namespace std;
//设置一个void类型的函数用于求出最大公约数和最小公倍数
void gcdgcm(int a, int b, int& gcd, int& gcm)
{
	int i = a;
	int j = b;
	while (j != 0) {
		int temp = j;
		j = i % j;
		i = temp;
	}
	gcd = i;//求得最大公约数
	gcm = a * b / gcd;//求最小公倍数


}
int main()
{
	int a, b;
	cout << "请输入两个自然数a，b:"<< endl;
	cin >> a >> b;
	int gcd_result, gcm_result;
	gcdgcm(a, b, gcd_result, gcm_result);//调用函数
	cout << a << "和" << b << "的最大公约数为" << gcd_result << endl;
	cout << a << "和" << b << "的最小公倍数为" << gcm_result << endl;
	return 0;

}
