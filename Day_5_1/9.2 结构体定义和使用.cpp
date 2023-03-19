#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//结构体语法
//struct 结构体名称 { 结构体成员列表 };

//typedef
struct Student
{
	int ID;
	string name;
	int age;
	int Cscore;
};

typedef struct Student sS;


int main0902()
{
	//结构体变量的创建方式1
	//struct 结构体名 变量名
	sS stu1;
	stu1.ID = 1;
	stu1.name = "张三";
	stu1.age = 18;
	stu1.Cscore = 100;

	cout << "学号：" << stu1.ID << endl << "姓名：" << stu1.name << endl <<
		"年龄：" << stu1.age << endl << "C语言成绩：" << stu1.Cscore << endl;

	//结构体变量的创建方式2
	//struct 结构体名 变量名 = { 赋值 }
	sS stu2 = { 2,"李四",19,80 };
	cout << "学号：" << stu2.ID << endl << "姓名：" << stu2.name << endl <<
		"年龄：" << stu2.age << endl << "C语言成绩：" << stu2.Cscore << endl;


	return EXIT_SUCCESS;
}