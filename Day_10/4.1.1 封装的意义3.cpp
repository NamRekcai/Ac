#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//封装意义2
//访问权限有三种
//public	公共权限	类内可以访问	类外也可以访问
//protected 保护权限	类内可以访问	类外不可以访问
//private	私有权限	类内可以访问	类外不可以访问

class Person
{
	//行为
public:
	void func()
	{
		m_name = "李四";
		m_car = "拖拉机";
		m_psw = 000;
	}

	void showPerson()
	{
		cout << m_name << endl;
		cout << m_car << endl;
		cout << m_psw << endl;
	}
	
	//属性

	//姓名 公共权限
public:
	string m_name;
	
protected:
	//汽车 保护权限
	string	m_car;

private:
	//银行卡密码 私有权限
	int m_psw;
};

int main04010103()
{
	Person p;
	p.m_name = "张三";
	/*p.m_car = "奔驰";
	p.m_psw = 123;*/
	
	
	cout << p.m_name << endl;
	p.func();
	p.showPerson();
	
	//cout << p.m_car << endl;
	//cout << p.m_psw << endl;

	return 0;
}