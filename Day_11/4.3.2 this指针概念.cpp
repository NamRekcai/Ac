#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//this 指针用途

class Person
{
public:
	//1、当形参与成员变量同名时，可用this来区分
	Person(int age)//形参
	{
		this->age = age;
	}

	//2、在类的非静态成员中返回对象本身，可用retuen *this
	Person& PersonAddPerson(Person p)
		//不加引用返回，则调用拷贝构造函数，相当于返回p2不同的另一个Person(只是值都是30)
	{
		this->age += p.age;
		return *this;
	}

	int age;
};

int main()
{
	Person p1(10);
	Person p2(20);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//链式编程思想
	cout << p2.age << endl;//也是链式编程思想

	return 0;
}