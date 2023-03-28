#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	int m_A;						//非静态成员变量，占对象空间		
	static int m_B;					//静态成员变量，不占对象空间
	void func(){}					//函数不占对象空间，所有函数共享一个函数
	static void func2(){}			//静态成员函数也不占对象空间

};

int Person::m_B = 10;

class B
{

};

int main()
{
	Person p;
	cout << sizeof(p) << endl;

	B b;
	cout << sizeof(b) << endl;
	//空对象占用空间为1，因为C++编译器会给空对象也分配一个字节空间，为了区分空对象占内存的位置
	//（每个对象都应该有独一无二的空间）


	return 0;
}