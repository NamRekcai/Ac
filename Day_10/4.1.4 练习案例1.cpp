#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�����������
//1������һ����������
//2���������
//3�������Ϊ����ȡ��������������
//4���ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����


class Cube
{
public:
	//��
	void setL(int l)	//д
	{
		m_L = l;
	}

	int getL()			//��
	{
		return m_L;
	}

	//��
	void setW(int w)	//д
	{
		m_W = w;
	}

	int getW()			//��
	{
		return m_W;
	}

	//��
	void setH(int h)	//д
	{
		m_H = h;
	}

	int getH()			//��
	{
		return m_H;
	}

	//��ȡ������������
	int calcS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	//��ȡ������������
	int calcV()
	{
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж������������Ƿ����
	/*bool isSameByClass(Cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
			return true;
		return false;
	}*/

	

private:
	int m_L;	//��
	int m_W;	//��
	int m_H;	//��
};

//����ȫ�ֺ����ж������������Ƿ����
	bool isSame(Cube& c1, Cube& c2)
	{
		if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
			return true;
		return false;
	}

int main04010401()
{
	//�������������
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1�����Ϊ��" << c1.calcS() << endl;
	cout << "c1�����Ϊ��" << c1.calcV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	cout << "c2�����Ϊ��" << c2.calcS() << endl;
	cout << "c2�����Ϊ��" << c2.calcV() << endl;

	//��ȫ�ֺ����ж������������Ƿ����
	if (isSame(c1, c2))
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	//���ó�Ա�����ж�
	/*if (c1.isSameByClass(c2))
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}*/
	
	return 0;
}