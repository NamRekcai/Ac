#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	//函数前面加上virtual关键字，就变成了虚函数，那么编译器在编译时候就不能确定函数调用了。
	//speak函数就是虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat : public Animal
{
	//重写，函数返回值类型、函数名、参数列表必须完全相同
	virtual /*可写可不写*/ void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal
{
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//我们希望传入什么对象，那么就调用什么对象的函数
void DoSpeak(Animal& animal)
{
	animal.speak();
}

//如果函数地址在编译阶段就能确定，那么静态联编
//如果函数地址在运行阶段才能确定，那么动态联编

void test01()
{
	Cat cat;
	Dog dog;
	DoSpeak(dog);	//这里父亲的引用接受子类对象，C++允许父子类型转换
}

//多态满足条件：
//1、有继承关系
//2、子类重写父类中的虚函数

//多态的使用
//父类的指针或引用指向子类对象

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