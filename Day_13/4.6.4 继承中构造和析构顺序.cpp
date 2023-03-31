#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数的调用！" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数的调用！" << endl;
	}
};

class son : public Base
{
public:
	son()
	{
		cout << "son的构造函数的调用！" << endl;
	}
	~son()
	{
		cout << "son的析构函数的调用！" << endl;
	}
};

void test01()
{
	son s;
	//继承中，先调用父类构造函数，再调用子类构造函数，析构与构造顺序相反
}

int main()
{
	test01();
	return 0;
}