#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Student
{
public:
	//��Ϊ
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
		cout << "������" << m_name << endl;
		cout << "ѧ�ţ�" << m_id << endl;
	}

	//����
	string m_name;
	int m_id;

	

};

int main04010102()
{
	Student s1;
	s1.setName("��������");
	s1.setID(17);
	s1.showStudent();


	return 0;
}