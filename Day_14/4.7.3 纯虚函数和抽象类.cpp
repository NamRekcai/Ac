#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	//���麯��
	//������һ�����麯�����������ǳ�����
	//�������޷�ʵ��������
	//�������ȥ��д�����еĴ��麯��������Ҳ���ڳ�����
	virtual void speak() = 0;
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

void doSpeak(Animal& animal)
{
	animal.speak();
}



void test01()
{
	Cat cat;
	doSpeak(cat);
	//Animal animal;
}

int main()
{
	test01();
	return 0;
}