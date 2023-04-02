#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯���ĵ���" << endl;
	}

	virtual void Speak() = 0;

	//���������������Խ������ָ���ͷ�������󲻸ɾ�������
	/*virtual ~Animal()
	{
		cout << "Animal���������ĵ���" << endl;
	}*/

	//������������
	virtual ~Animal() = 0;
	//��������ҲҪ����ʵ�֡�
};

Animal::~Animal()
{
	cout << "Animal���������ĵ���" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯���ĵ���" << endl;
		m_Name = new string(name);
	}

	virtual void Speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}

	virtual ~Cat()
	{
		cout << "Cat�����������ĵ���" << endl;
		if (this->m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}

	string* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->Speak();
	//ͨ������ָ��ȥ�ͷţ��ᵼ����������ͷŲ��ɾ�
	//�������������������
	delete animal;
}


int main()
{
	test01();
	return 0;
}