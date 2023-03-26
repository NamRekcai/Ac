#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//封装意义1
//将属性和行为写在一起，表现事物

/*
语法：
class 类名
{
访问权限：
	行为;
	属性;
访问权限：
	行为;
	属性;
};
*/

const double PI = 3.14;


//定义了一个圆类
class Circle
{
public:
	//行为
	//计算圆的周长
	double calcZC()
	{
		return 2 * PI * m_r;
	}
	//属性
	int m_r;
};

int main04010101()
{
	//通过圆类，创建了一个圆类的对象c1
	//c1就是一个具体的圆
	Circle c1;
	c1.m_r = 10;//给圆对象的半径进行赋值操作
	double rst = c1.calcZC();
	cout << "圆的周长是：" << rst << endl;
	return 0;
}