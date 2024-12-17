#include<iostream>
using namespace std;
//建立一个点类
class Point
{
public:
	//建立一个构造函数给x与y进行赋值
	Point()
	{
		x = 60;
		y = 80;

	}
	// 设置坐标值：将 (x, y) 改为 (60 + i, 80 + j)
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
//构造一个输出坐标值的函数
	void test01()
	{
		cout << "该点的坐标值为： （" << x << " , " << y<<")" << endl;
	}

//设立私有变量x和y来表示坐标
private:
	int x;
	int y;

};
int main()
{
	//创建一个Point类的对象p
	Point p;
	cout << "初始坐标：";
	p.test01();  // 输出初始坐标

	// 修改坐标，假设 i = 10, j = 20
	p.setPoint(10, 20);
	cout << "修改后的坐标：";
	p.test01();  // 输出修改后的坐标
	return 0;
}