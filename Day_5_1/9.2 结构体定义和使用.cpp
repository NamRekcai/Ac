#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�ṹ���﷨
//struct �ṹ������ { �ṹ���Ա�б� };

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
	//�ṹ������Ĵ�����ʽ1
	//struct �ṹ���� ������
	sS stu1;
	stu1.ID = 1;
	stu1.name = "����";
	stu1.age = 18;
	stu1.Cscore = 100;

	cout << "ѧ�ţ�" << stu1.ID << endl << "������" << stu1.name << endl <<
		"���䣺" << stu1.age << endl << "C���Գɼ���" << stu1.Cscore << endl;

	//�ṹ������Ĵ�����ʽ2
	//struct �ṹ���� ������ = { ��ֵ }
	sS stu2 = { 2,"����",19,80 };
	cout << "ѧ�ţ�" << stu2.ID << endl << "������" << stu2.name << endl <<
		"���䣺" << stu2.age << endl << "C���Գɼ���" << stu2.Cscore << endl;


	return EXIT_SUCCESS;
}