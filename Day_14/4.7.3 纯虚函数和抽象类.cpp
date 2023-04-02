#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	//纯虚函数
	//类中有一个纯虚函数，这个类就是抽象类
	//抽象类无法实例化对象
	//子类必须去重写父亲中的纯虚函数，否则也属于抽象类
	virtual void speak() = 0;
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
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