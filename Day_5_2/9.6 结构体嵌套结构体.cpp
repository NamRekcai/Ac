#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
	//struct Student stu[100];
};

int main0906()
{
	struct Teacher t1;
	t1.id = 1;
	t1.name = "����";
	t1.age = 40;

	t1.stu.name = "����";
	t1.stu.age = 19;
	t1.stu.score = 80;

	cout << "��ʦ��ţ�" << t1.id << endl << "��ʦ������" << t1.name << endl <<
		"��ʦ�����䣺" << t1.age << endl << "��ʦ��ѧ����������" << t1.stu.name << endl
		<< "��ʦ��ѧ�������䣺" << t1.stu.age << endl << "��ʦ��ѧ���ĳɼ���" << t1.stu.score << endl;

	return 0;
}