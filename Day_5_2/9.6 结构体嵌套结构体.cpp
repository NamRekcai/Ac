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
	t1.name = "老王";
	t1.age = 40;

	t1.stu.name = "张三";
	t1.stu.age = 19;
	t1.stu.score = 80;

	cout << "教师编号：" << t1.id << endl << "教师姓名：" << t1.name << endl <<
		"教师的年龄：" << t1.age << endl << "教师的学生的姓名：" << t1.stu.name << endl
		<< "教师的学生的年龄：" << t1.stu.age << endl << "教师的学生的成绩：" << t1.stu.score << endl;

	return 0;
}