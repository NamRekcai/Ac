#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//this ָ����;

class Person
{
public:
	//1�����β����Ա����ͬ��ʱ������this������
	Person(int age)//�β�
	{
		this->age = age;
	}

	//2������ķǾ�̬��Ա�з��ض���������retuen *this
	Person& PersonAddPerson(Person p)
		//�������÷��أ�����ÿ������캯�����൱�ڷ���p2��ͬ����һ��Person(ֻ��ֵ����30)
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
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//��ʽ���˼��
	cout << p2.age << endl;//Ҳ����ʽ���˼��

	return 0;
}