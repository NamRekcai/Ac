#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	void showClassName()
	{
		cout << "我是Person类" << endl;
	}

	void showPerson()
	{
		if (this == NULL)
		{
			return;
		}
		cout << m_Age << endl;//this _> m_Age,this是空的
	}

	int m_Age;
};

void test01()
{
	Person* p = NULL;
	p->showClassName();//this可以调用成员函数
	p->showPerson();//但是，如果成员函数中用到了this指针，就不可以了
}

int main()
{
	test01();
	return 0;
}