#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	//构造函数去初始化
	/*Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//使用初始化列表
	//Person() :m_A(30), m_B(40), m_C(50) {}
	Person(int a, int b, int c) :
		m_A(a), m_B(b), m_C(c) 
	{
		cout << "构造函数的调用" << endl;
	}

	//相比传统方式，赋值号换成了括号，前面多了冒号
	int m_A;
	int m_B;
	int m_C;
};


int main()
{
	Person p1(10,50,60);

	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	cout << p1.m_C << endl;

	return 0;
}