#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	//无参构造函数
	Person()
	{
		cout << "无参构造函数的调用" << endl;
	}

	//有参构造函数
	Person(int age,int height)
	{
		m_age = age;
		m_height = new int(height);

		cout << "有参构造函数的调用" << endl;
	}

	//系统给我们准备的拷贝构造函数
	/*Person(const Person& p)
	{
		m_age = p.m_age;
		m_height = p.m_height;
		cout << "拷贝构造函数的调用" << endl;
	}*/

	//自己去写拷贝构造函数，并且要进行深拷贝操作，解决同一块堆区内存重复释放的问题
	Person(const Person&p)
	{
		m_age = p.m_age;
		//m_height = new int(height);
		m_height = new int(*p.m_height);//深拷贝操作

		cout << "有参构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "析构构造函数的调用" << endl;
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
			
		
	}

	int m_age;
	int* m_height;

};

void test01()
{
	Person p1(18, 180);
	Person p2(p1);
	cout << "p1的年龄是：" << p1.m_age << "身高：" << p1.m_height << endl;
	cout << "p2的年龄是：" << p2.m_age << "身高：" << p2.m_height << endl;
}

int main()
{
	test01();
	return 0;
}