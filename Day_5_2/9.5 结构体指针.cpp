#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

struct Student
{
	int ID;
	string name;
	int age;
	int Cscore;
};

int main0905()
{
	struct Student stu = { 1,"����",19,90 };
	struct Student* p = &stu;

	stu.age = 18;
	p->Cscore = 100; //ָ��ͨ�� -> ���ʳ�Ա

	
		cout << "ѧ�ţ�" << p->ID << endl << "������" << p->name << endl <<
			"���䣺" << p->age << endl << "C���Գɼ���" << p->Cscore << endl << endl;

	return 0;
}