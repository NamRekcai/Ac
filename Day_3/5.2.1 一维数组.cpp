#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main050201()
{
	//定义方式1
	//数据结构 数组名称[元素个数];
	int score[10];

	//利用数组下标赋值
	score[0] = 100;
	score[1] = 90;
	score[2] = 85;

	//利用数组下标访问数组，将其打印在屏幕上
	cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;

	//定义方式2
	//数据类型 数组名称[元素个数]={ 值1，值2,···}；
	//如果{}内不足10元素，剩下的数据用0补全。
	int score2[10] = { 100,90,80,70,60,50,40,30,20,10 };
	int score3[10] = { 100,90,80 };

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "score2[" << i << "]=" << score2[i] << endl;
	}

	//倒序输入
	for (i = 9; i >= 0; i--)
	{
		cin >> score3[i];
	}

	for (i = 0; i < 10; i++)
	{
		cout << "score3[" << i << "]=" << score3[i] << endl;
	}
	//定义方式3
	//数据类型 数组名称[]={值1，值2，···};
	int score4[] = { 100,90,80,70 };
	
	return 0;
}