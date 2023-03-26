#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;

//��ƽ����sqet();

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
	//�뾶
	void setR(int R)
	{
		m_R = R;
	}

	int getR()
	{
		return m_R;
	}

	//Բ��
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
	//�����п�������һ������Ϊ�����еĳ�Ա
	Point m_Center;

};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������ľ���
	int distance = sqrt(pow(c.getCenter().getX() - p.getX(), 2) +
		pow(c.getCenter().getY() - p.getY(), 2));
	if (distance == c.getR())
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > c.getR())
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main040104()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);
	//�ж�
	isInCircle(c, p);
	return 0;
}