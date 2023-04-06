#include <iostream>
#include <string>
using namespace std;

//��ģ��
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1��ָ����������
void printPerson1(Person<string, int> &p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int> p1("�����", 100);
	printPerson1(p1);
}

//2������ģ�廯
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p)
{
	p.showPerson();
	cout << "T1�������ǣ�" << typeid(T1).name() << endl;
	cout << "T2�������ǣ�" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int> p2("��˽�", 90);
	printPerson2(p2);
}

//3��������ģ�廯
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T�������ǣ�" << typeid(T).name() << endl;
}

void test03()
{
	Person<string, int> p3("ɳɮ", 80);
	printPerson3(p3);
}

int main()
{
	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}