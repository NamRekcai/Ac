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
	cout << "��" << stu.name << endl << stu.age << endl << stu.score << endl;

}

void printStu2(struct Student* p)
{
	p->age = 18;
	cout << "��" << p->name << endl << p->age << endl << p->score << endl;

}

int main0907()
{
	struct Student stu = { "����",19,80 };
	//ֵ����
	//printStu(stu);
	//cout << "��" << stu.name << endl << stu.age << endl << stu.score << endl;

	//��ַ����
	printStu2(&stu);
	cout << "��" << stu.name << endl << stu.age << endl << stu.score << endl;


	return 0;
}