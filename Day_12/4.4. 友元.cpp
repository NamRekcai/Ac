#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


class goodGayClass; //������


class Building
{
	//���߱�������goodGayȫ�ֺ�������Building��ĺ����ѣ����Է���˽�����е�����
	friend void goodGay(Building* building);
	
	//���߱�������goodGayClass�࣬��Building��ĺ����ѣ����Է���˽�����е�����
	friend class goodGayClass;
	
	//���߱�������goodGayClass���е�visit����Building��ĺ����ѣ����Է���˽�����е�����
	//friend void goodGayClass::visit();//������::

public:
	Building()
	{
		m_Sittingroom = "����";
		m_Bedroom = "����";
	}

	string m_Sittingroom; // ����

private:
	string m_Bedroom; //����
};

class goodGayClass
{
public:
	goodGayClass()
	{
		building = new Building;
	}
	~goodGayClass()
	{
		delete building;
	}
	void visit()
	{
		cout << "�û������ڷ��ʣ�" << building->m_Sittingroom << endl;
		//cout << "�û������ڷ��ʣ�" << building->m_Bedroom << endl;
	}

	Building* building;
};

void goodGay(Building* building)
{
	cout << "�û������ڷ��ʣ�" << building->m_Sittingroom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_Bedroom << endl;
}

void test01()
{
	Building b;
	goodGayClass(&b);
	goodGayClass g;
	g.visit();

}

int main()
{
	test01();
	return 0;
}