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
		{1,"����",18,90},
		{2,"����",19,60},
		{3,"����",17,80}
	};

	for (int i = 0; i < sizeof(stu) / sizeof(stu[0]); i++)
	{
		cout << "ѧ�ţ�" << stu[i].ID << endl << "������" << stu[i].name << endl <<
			"���䣺" << stu[i].age << endl << "C���Գɼ���" << stu[i].Cscore << endl << endl;
	}

	return EXIT_SUCCESS;
}