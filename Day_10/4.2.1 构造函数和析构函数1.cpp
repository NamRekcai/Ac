#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	//构造函数
	//类名(){}
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}
	//析构函数
	//~类名(){}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

void test01()
{
	Person p;
}

int main()
{
	test01();
	Person p;
	system("pause");
	return 0;
}


//函数无错误 IDE问题 单独调试