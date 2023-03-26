#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Student
{
public:
	//行为
	void setName(string name)
	{
		m_name = name;
	}
	void setID(int id)
	{
		m_id = id;
	}
	void showStudent()
	{
		cout << "姓名：" << m_name << endl;
		cout << "学号：" << m_id << endl;
	}

	//属性
	string m_name;
	int m_id;

	

};

int main04010102()
{
	Student s1;
	s1.setName("德玛西亚");
	s1.setID(17);
	s1.showStudent();


	return 0;
}