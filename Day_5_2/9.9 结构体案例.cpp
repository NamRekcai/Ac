#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <ctime>
using namespace std;


//2�����ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
struct Student
{
	string name;
	int score;
};

struct Teacher
{
	string name;
	struct Student sArr[5];
};

void Init(Teacher* tArr, int len)
{
	string tName = "��ʦ";
	string sName = "ѧ��";
	char nameSeed[] = "ABCDE";

	for (int i = 0; i < len; i++)
	{
		tArr[i].name = tName + nameSeed[i];
		for (int j = 0; j < 5; j++)
		{
			tArr[i].sArr[j].name = sName + nameSeed[j];
			tArr[i].sArr[j].score = rand() % 61 + 40;//0~99//α���
		}
	}
}

void print(Teacher* tArr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArr[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArr[i].sArr[j].name << "������" << tArr[i].sArr[j].score << endl;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL)); //���������ֵ
	//1��ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������

	//3��ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ

	Teacher tArr[3];
	Init(tArr, sizeof(tArr) / sizeof(tArr[0]));
	
	//4�����մ�ӡ����ʦ�����Լ���ʦ������ѧ������
	print(tArr, sizeof(tArr) / sizeof(tArr[0]));


	return 0;
}