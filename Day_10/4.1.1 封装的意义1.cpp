#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//��װ����1
//�����Ժ���Ϊд��һ�𣬱�������

/*
�﷨��
class ����
{
����Ȩ�ޣ�
	��Ϊ;
	����;
����Ȩ�ޣ�
	��Ϊ;
	����;
};
*/

const double PI = 3.14;


//������һ��Բ��
class Circle
{
public:
	//��Ϊ
	//����Բ���ܳ�
	double calcZC()
	{
		return 2 * PI * m_r;
	}
	//����
	int m_r;
};

int main04010101()
{
	//ͨ��Բ�࣬������һ��Բ��Ķ���c1
	//c1����һ�������Բ
	Circle c1;
	c1.m_r = 10;//��Բ����İ뾶���и�ֵ����
	double rst = c1.calcZC();
	cout << "Բ���ܳ��ǣ�" << rst << endl;
	return 0;
}