#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1�����һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;

struct hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(hero* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printHeros(hero*arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << arr[i].name << "�Ա�" << arr[i].sex << "���䣺" << arr[i].age << endl;
	 }
}


int main0908()
{
//2�������ṹ�����飬�����д��5��Ӣ�ۡ�

struct hero arr[5]=
{
	{"����",23,"��"},
	{"����",22,"��"},
	{"�ŷ�",20,"��"},
	{"����",21,"��"},
	{"����",19,"Ů"},
};

//3��ͨ��ð��������㷨���������е�Ӣ�۰������������������

bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));

//4�����մ�ӡ�����Ľ����

printHeros(arr, sizeof(arr) / sizeof(arr[0]));


	return 0;
}