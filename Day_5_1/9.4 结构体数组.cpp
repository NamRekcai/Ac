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


int main0904()
{
	int arr[] = { 1,2,3 };
	//struct Student stu[3];
	struct Student stu[3] =
	{
		{1,"张三",18,90},
		{2,"李四",19,60},
		{3,"王五",17,80}
	};

	for (int i = 0; i < sizeof(stu) / sizeof(stu[0]); i++)
	{
		cout << "学号：" << stu[i].ID << endl << "姓名：" << stu[i].name << endl <<
			"年龄：" << stu[i].age << endl << "C语言成绩：" << stu[i].Cscore << endl << endl;
	}

	return EXIT_SUCCESS;
}