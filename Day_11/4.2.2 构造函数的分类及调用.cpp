#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1、构造函数分类
//按参数分类：有参和无参（无参又称为默认构造函数）

//按类型分类：普通构造函数、拷贝构造函数

class Person
{
public:
	//无参（默认）构造函数
	Person()
	{
		cout << "无参构造函数调用" << endl;
	}

	//有参构造函数
	Person(int a)
	{
		age = a;
		cout << "有参构造函数调用" << endl;
	}

	//拷贝构造函数（引用方式传进来的，这种形式是拷贝构造函数）
	//传进一个Person p，完全复制它，const：确保原来的p不被改变
	Person(const Person& p)
	{
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}

	//析构函数
	~Person()
	{
		cout << "析构函数调用" << endl;
	}

	int age;
};

void test01()
{
	//三种调用方式
	
	//1、括号法,是最常用的方法
	Person p;			//调用无参构造函数
	Person p1(10);		//调用有参构造函数
	cout << p1.age << endl;

	//Person p2();err
	//注意：调用无参函数不能加括号，如果加了括号编译器认为这是一个函数的声明

	Person p3(p1);
	cout << p3.age << endl;//调用拷贝构造函数


	//2、显示法
	Person p4 = Person(10);//有参构造
	Person p5 = Person(p4);//拷贝构造
	cout << p5.age << endl;
	//以上，赋值运算左侧为对象的名称
	//Person(10);//单独写就是匿名对象,执行完当前行立马析构 不推荐
	//Person(p5);//也是匿名对象
	//注意：尽量不要使用匿名对象
	//注意：不能利用拷贝构造函数去初始化匿名对象，编译器认为你这是对象声明
	cout << p5.age << endl;


	//3、隐式转换法
	Person p6 = 10;//相当于 Person p6=Person(10);
	Person p7 = p6;//相当于 Person p7=Person(p6);
	//如果要传入多个参数，需要使用大括号

}	

int main()
{
	test01();
	return 0;
}