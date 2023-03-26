#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	//姓名	可读可写
	string getName()//读
	{
		return m_name;
	}
	
	void setName(string name)//写
	{
		m_name = name;
	}
	
	//年龄	只读
	int getAge()
	{
		m_age = 18;
		return m_age;
	}

	void setAge(int age)
	{
		if (age < 0 || age>120)
		{
			cout << "老妖精" << endl;
						return;
		}
		m_age = age;
			
	}
	
	//void getAge(int age)
	//{
	//	cout << "年龄不可写：" << endl;
	//}

	//情人	只写
	void setLove(string loverName)
	{
		m_lover = loverName;
	}

private:
	string m_name;//姓名	可读可写
	int m_age;//年龄	只读
	string m_lover;//情人 只写
};

int main040103()
{
	Person p;

	//姓名
	p.setName("张三");
	cout << "姓名:" << p.getName() << endl;

	//年龄
	cout << "年龄：" << p.getAge() << endl;

	//情人
	//p.setName("苍井"); 
	


	return 0;
}