#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
	//成员函数，不适合重载<<，因为，它做出来的效果和我们传统的cout格式不一样，正好反了。p << cout
	/*void operator<<(Person& p)
	{
		cout << "m_A: " << p.m_A << " m_B: " << p.m_B << endl;
	}*/
};

//编译器给你起的函数名字是 operator<<
ostream& operator<<(ostream& out, Person& p)
{
	out << "m_A: " << p.m_A << " m_B: " << p.m_B;
	return out;
}

int main()
{
	cout << "Hello World" << " " << "123" << endl; //链式编程
	Person p1(10, 20);
	cout << p1 << endl;
	return 0;
}