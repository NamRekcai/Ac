#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	//����	�ɶ���д
	string getName()//��
	{
		return m_name;
	}
	
	void setName(string name)//д
	{
		m_name = name;
	}
	
	//����	ֻ��
	int getAge()
	{
		m_age = 18;
		return m_age;
	}

	void setAge(int age)
	{
		if (age < 0 || age>120)
		{
			cout << "������" << endl;
						return;
		}
		m_age = age;
			
	}
	
	//void getAge(int age)
	//{
	//	cout << "���䲻��д��" << endl;
	//}

	//����	ֻд
	void setLove(string loverName)
	{
		m_lover = loverName;
	}

private:
	string m_name;//����	�ɶ���д
	int m_age;//����	ֻ��
	string m_lover;//���� ֻд
};

int main040103()
{
	Person p;

	//����
	p.setName("����");
	cout << "����:" << p.getName() << endl;

	//����
	cout << "���䣺" << p.getAge() << endl;

	//����
	//p.setName("�Ծ�"); 
	


	return 0;
}