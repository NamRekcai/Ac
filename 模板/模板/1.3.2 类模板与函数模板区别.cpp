#include <iostream>
#include <string>
using namespace std;

//类模板
template<class NameType, class AgeType = int>
class Person
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1、类模板没有自动类型推导的使用方式
void test01()
{
	//Person p1("孙悟空", 999); //错误，类模板使用时候，不可以用自动类型
	Person<string, int> p2("猪八戒", 800); //必须使用显示指定类型的方式
}

//2、类模板在模板参数列表中可以有默认参数
void test02()
{
	Person<string> p3("沙僧", 700); //类模板中的模板参数列表，可以指定默认参数
	p3.showPerson();
}

int main()
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}