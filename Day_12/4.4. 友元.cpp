#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


class goodGayClass; //声明类


class Building
{
	//告诉编译器，goodGay全局函数，是Building类的好朋友，可以访问私有类中的内容
	friend void goodGay(Building* building);
	
	//告诉编译器，goodGayClass类，是Building类的好朋友，可以访问私有类中的内容
	friend class goodGayClass;
	
	//告诉编译器，goodGayClass类中的visit，是Building类的好朋友，可以访问私有类中的内容
	//friend void goodGayClass::visit();//作用域::

public:
	Building()
	{
		m_Sittingroom = "客厅";
		m_Bedroom = "卧室";
	}

	string m_Sittingroom; // 客厅

private:
	string m_Bedroom; //卧室
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
		cout << "好基友正在访问：" << building->m_Sittingroom << endl;
		//cout << "好基友正在访问：" << building->m_Bedroom << endl;
	}

	Building* building;
};

void goodGay(Building* building)
{
	cout << "好基友正在访问：" << building->m_Sittingroom << endl;
	cout << "好基友正在访问：" << building->m_Bedroom << endl;
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