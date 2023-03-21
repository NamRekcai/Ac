#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

void printStu(struct Student stu)
{
	stu.age = 18;
	cout << "子" << stu.name << endl << stu.age << endl << stu.score << endl;

}

void printStu2(struct Student* p)
{
	p->age = 18;
	cout << "子" << p->name << endl << p->age << endl << p->score << endl;

}

int main0907()
{
	struct Student stu = { "张三",19,80 };
	//值传递
	//printStu(stu);
	//cout << "主" << stu.name << endl << stu.age << endl << stu.score << endl;

	//地址传递
	printStu2(&stu);
	cout << "主" << stu.name << endl << stu.age << endl << stu.score << endl;


	return 0;
}