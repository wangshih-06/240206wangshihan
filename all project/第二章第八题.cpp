#include<iostream>
#include<cmath>//����fabs����ͷ�ļ�
using namespace std;
int main()
{
	double a, xn, xnp1;//����a xn xn+1
	cout << "������a��ֵ:";//��ʾ����a��ֵ
	cin >> a;//����a��ֵ
	xn = a;//��a��ֵ����x
	if (a >= 0)//���a���ڵ���0 ����
	{
		for (; 1;)//��ѭ��
		{
			xnp1 = (1.0 / 2) * (xn + (a / xn));//��xn+1��ֵ
			if (fabs(xnp1 - xn) < 0.00001)//fabsΪ����ֵ �����������
			{
				cout << "a��ƽ����Ϊ" << xnp1;//�����ǰxn+1(a��ƽ����)��ֵ
				break;//�˳�ѭ��
			}
			xn = xnp1;//���˴�xn+1��ֵ�����´ε�xn
		}
	}
	else//���aС��0
	{
		cout << "��ƽ����Ҫa>=0" << endl;//��ʾ���ܿ���
	}
	return 0;
}