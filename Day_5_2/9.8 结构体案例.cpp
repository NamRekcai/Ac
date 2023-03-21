#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1、设计一个英雄的结构体，包括成员姓名，年龄，性别;

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
		cout << "姓名：" << arr[i].name << "性别：" << arr[i].sex << "年龄：" << arr[i].age << endl;
	 }
}


int main0908()
{
//2、创建结构体数组，数组中存放5名英雄。

struct hero arr[5]=
{
	{"刘备",23,"男"},
	{"关羽",22,"男"},
	{"张飞",20,"男"},
	{"赵云",21,"男"},
	{"貂蝉",19,"女"},
};

//3、通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序

bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));

//4、最终打印排序后的结果。

printHeros(arr, sizeof(arr) / sizeof(arr[0]));


	return 0;
}