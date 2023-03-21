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
	struct Student stu = { 1,"张三",19,90 };
	struct Student* p = &stu;

	stu.age = 18;
	p->Cscore = 100; //指针通过 -> 访问成员

	
		cout << "学号：" << p->ID << endl << "姓名：" << p->name << endl <<
			"年龄：" << p->age << endl << "C语言成绩：" << p->Cscore << endl << endl;

	return 0;
}