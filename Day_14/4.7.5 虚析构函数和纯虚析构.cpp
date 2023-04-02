#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数的调用" << endl;
	}

	virtual void Speak() = 0;

	//虚析构函数，可以解决父类指针释放子类对象不干净的问题
	/*virtual ~Animal()
	{
		cout << "Animal析构函数的调用" << endl;
	}*/

	//纯虚析构函数
	virtual ~Animal() = 0;
	//纯虚析构也要进行实现。
};

Animal::~Animal()
{
	cout << "Animal析构函数的调用" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数的调用" << endl;
		m_Name = new string(name);
	}

	virtual void Speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	virtual ~Cat()
	{
		cout << "Cat的析构函数的调用" << endl;
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
	//通过父类指针去释放，会导致子类对象释放不干净
	//给基类添加虚析构函数
	delete animal;
}


int main()
{
	test01();
	return 0;
}