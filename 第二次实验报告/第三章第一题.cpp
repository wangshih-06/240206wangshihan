#include<iostream>
using namespace std;
//����һ��void���͵ĺ�������������Լ������С������
void gcdgcm(int a, int b, int& gcd, int& gcm)
{
	int i = a;
	int j = b;
	while (j != 0) {
		int temp = j;
		j = i % j;
		i = temp;
	}
	gcd = i;//������Լ��
	gcm = a * b / gcd;//����С������


}
int main()
{
	int a, b;
	cout << "������������Ȼ��a��b:"<< endl;
	cin >> a >> b;
	int gcd_result, gcm_result;
	gcdgcm(a, b, gcd_result, gcm_result);//���ú���
	cout << a << "��" << b << "�����Լ��Ϊ" << gcd_result << endl;
	cout << a << "��" << b << "����С������Ϊ" << gcm_result << endl;
	return 0;

}
