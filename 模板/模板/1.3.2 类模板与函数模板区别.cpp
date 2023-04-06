#include <iostream>
#include <string>
using namespace std;

//��ģ��
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

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
	//Person p1("�����", 999); //������ģ��ʹ��ʱ�򣬲��������Զ�����
	Person<string, int> p2("��˽�", 800); //����ʹ����ʾָ�����͵ķ�ʽ
}

//2����ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person<string> p3("ɳɮ", 700); //��ģ���е�ģ������б�����ָ��Ĭ�ϲ���
	p3.showPerson();
}

int main()
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}