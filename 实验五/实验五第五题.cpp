#include<iostream>
using namespace std;
//����һ������
class Point
{
public:
	//����һ�����캯����x��y���и�ֵ
	Point()
	{
		x = 60;
		y = 80;

	}
	// ��������ֵ���� (x, y) ��Ϊ (60 + i, 80 + j)
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
//����һ���������ֵ�ĺ���
	void test01()
	{
		cout << "�õ������ֵΪ�� ��" << x << " , " << y<<")" << endl;
	}

//����˽�б���x��y����ʾ����
private:
	int x;
	int y;

};
int main()
{
	//����һ��Point��Ķ���p
	Point p;
	cout << "��ʼ���꣺";
	p.test01();  // �����ʼ����

	// �޸����꣬���� i = 10, j = 20
	p.setPoint(10, 20);
	cout << "�޸ĺ�����꣺";
	p.test01();  // ����޸ĺ������
	return 0;
}