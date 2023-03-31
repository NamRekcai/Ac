#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	//����ǰ�����virtual�ؼ��֣��ͱ�����麯������ô�������ڱ���ʱ��Ͳ���ȷ�����������ˡ�
	//speak���������麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat : public Animal
{
	//��д����������ֵ���͡��������������б������ȫ��ͬ
	virtual /*��д�ɲ�д*/ void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog : public Animal
{
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//����ϣ������ʲô������ô�͵���ʲô����ĺ���
void DoSpeak(Animal& animal)
{
	animal.speak();
}

//���������ַ�ڱ���׶ξ���ȷ������ô��̬����
//���������ַ�����н׶β���ȷ������ô��̬����

void test01()
{
	Cat cat;
	Dog dog;
	DoSpeak(dog);	//���︸�׵����ý����������C++����������ת��
}

//��̬����������
//1���м̳й�ϵ
//2��������д�����е��麯��

//��̬��ʹ��
//�����ָ�������ָ���������

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{
	test01();
	//test02();
	return 0;
}