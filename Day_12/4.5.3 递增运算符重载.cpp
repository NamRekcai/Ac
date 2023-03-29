#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);

public:
	Person()
	{
		m_A = 0;
		m_B = 0;
	}

	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

	//编译器给你的函数起的名字是：operator++
	//前置递增
	Person& operator++()
	{
		//先自增
		this->m_A++;
		this->m_B++;
		//后返回本身
		return *this;
	}

	//后置递增
	Person operator++(int) //int是个占位参数，用于区分前置和后置递增
	{
		//先返回
		Person temp = *this;
		//才自增
		m_A++;
		m_B++;
		return temp;
	}

private:
	int m_A;
	int m_B;
};

ostream& operator<<(ostream& out, Person& p)
{
	out << "m_A: " << p.m_A << " m_B:" << p.m_B;
	return out;
}

int main()
{
	int i = 1;
	//i++++++++; //返回的是值（值传递）
	++++++++i;	//返回的是引用
	cout << i << endl;
	//前置递增，返回值类型是引用的，后置递增，返回值是值传递

	Person p1(1, 2);
	p1++;
	++p1;
	//后置递增返回值而不是地址的原因是：返回的是局部对象，局部对象在它的范围内执行完就被释放了，
	//如果返回的是引用，再进行自增就是非法操作
	//后置递增比前置递增浪费时间
	cout << p1 << endl;
	return 0;
}