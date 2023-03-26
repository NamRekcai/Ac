#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;

//开平方用sqet();

class Point
{
public:
	//x
	void setX(int X)
	{
		m_X = X;
	}

	int getX()
	{
		return m_X;
	}
	
	void setY(int Y)
	{
		m_Y = Y;
	}

	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;
};

class Circle
{
public:
	//半径
	void setR(int R)
	{
		m_R = R;
	}

	int getR()
	{
		return m_R;
	}

	//圆心
	void setCenter(Point center)
	{
		m_Center = center;
	}

	Point getCenter()
	{
		return m_Center;
	}

private:
	int m_R;
	//在类中可以让另一个类作为本类中的成员
	Point m_Center;

};

//判断点和圆的关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点的距离
	int distance = sqrt(pow(c.getCenter().getX() - p.getX(), 2) +
		pow(c.getCenter().getY() - p.getY(), 2));
	if (distance == c.getR())
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > c.getR())
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main040104()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(10);
	//判断
	isInCircle(c, p);
	return 0;
}