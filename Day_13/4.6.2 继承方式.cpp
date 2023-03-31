#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//公共继承
class base1
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son1 :public base1
{
public:
	void func()
	{
		a = 10;		//父类中的公共权限成员，到子类中依然是公共权限
		b = 10;		//父类中的保护权限成员，到子类中依然是保护权限
		//c = 10;	//父类中的私有权限成员，到子类中访问不到
	}
};

void test01()
{
	son1 s1;
	s1.a = 100;		//类外只能访问公共权限
	//s1.b = 100;	//son1中b是保护权限，类外访问不到
	//s1.c = 100;

}

//保护继承
class base2
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son2 :protected base2
{
public:
	void func()
	{
		a = 10;		//父类中的公共权限成员，到子类中依然可以访问
		b = 10;		//父类中的保护权限成员，到子类中依然可以访问
		//c = 10;	//父类中的私有权限成员，到子类中访问不到
	}
};

void test02()
{
	son2 s2;
	//s2.a = 100;	//s2中a变为保护权限，类外访问不到
	//s2.b = 100;	//s2中b是保护权限，类外访问不到
	//s2.c = 100;	//s2中c是私有权限，类外访问不到
}

//私有继承
class base3
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son3 :private base3
{
public:
	void func()
	{
		a = 10;		//父类中的公共权限成员，到子类中依然可以访问
		b = 10;		//父类中的保护权限成员，到子类中依然可以访问
		//c = 10;	//父类中的私有权限成员，到子类中访问不到
	}
};

void test03()
{
	son 3 s3;
	//s3.a = 100;	//父亲中的公共权限成员，到子类是私有权限
	//s3.b = 100;	//父亲中的保护权限成员，到子类是私有权限
	//s3.c = 100;	//s2中c是私有权限，类外访问不到
}


int main()
{

	return 0;
}