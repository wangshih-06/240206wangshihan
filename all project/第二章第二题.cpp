#include<iostream>
using namespace std;
int main()
{
	double x;//�����Ա���x
	double y;//���������y
	cout << "������x��ֵ:";//��ʾ����x��ֵ
	cin >> x;//����x��ֵ
	if (x > 0 && x < 1)//���0<x<1
	{
		y = 3 - (2 * x);//�����y��ֵ
		cout << "y=" << y << endl;//���y��ֵ
	}
	else if (x >= 1 && x < 5)//���1<=x<5
	{
		y = 2 / (4 * x) + 1;//�����y��ֵ
		cout << "y=" << y << endl;//���y��ֵ
	}
	else if (x >= 5 && x < 10)//���5=<x<10
	{
		y = x * x;//�����y��ֵ
		cout << "y=" << y << endl;//���y��ֵ
	}
	else//��������
	{
		cout << "�������xֵ���ڶ�������" << endl;//���ڶ�������
	}
	return 0;
}