#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double fa;//���廪���¶�
	cout << "�����뻪���¶�" << endl;
	cin >> fa;
	double ce=(fa-32)*5/9;//���������¶�
	cout << fixed << setprecision(2) << "�����¶�Ϊ��" << ce << endl;



		return 0;
}