#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//立方体类设计
//1、创建一个立方体类
//2、设计属性
//3、设计行为：获取立方体面积和体积
//4、分别用全局函数和成员函数判断两个立方体是否相等


class Cube
{
public:
	//长
	void setL(int l)	//写
	{
		m_L = l;
	}

	int getL()			//读
	{
		return m_L;
	}

	//宽
	void setW(int w)	//写
	{
		m_W = w;
	}

	int getW()			//读
	{
		return m_W;
	}

	//高
	void setH(int h)	//写
	{
		m_H = h;
	}

	int getH()			//读
	{
		return m_H;
	}

	//获取立方体的面积：
	int calcS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	//获取立方体的体积：
	int calcV()
	{
		return m_L * m_W * m_H;
	}

	//利用成员函数判断两个立方体是否相等
	/*bool isSameByClass(Cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
			return true;
		return false;
	}*/

	

private:
	int m_L;	//长
	int m_W;	//宽
	int m_H;	//高
};

//利用全局函数判断两个立方体是否相等
	bool isSame(Cube& c1, Cube& c2)
	{
		if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
			return true;
		return false;
	}

int main04010401()
{
	//创建立方体对象
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1的面积为：" << c1.calcS() << endl;
	cout << "c1的体积为：" << c1.calcV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	cout << "c2的面积为：" << c2.calcS() << endl;
	cout << "c2的体积为：" << c2.calcV() << endl;

	//用全局函数判断两个立方体是否相等
	if (isSame(c1, c2))
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}

	//利用成员函数判断
	/*if (c1.isSameByClass(c2))
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}*/
	
	return 0;
}