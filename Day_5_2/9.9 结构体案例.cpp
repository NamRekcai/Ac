#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <ctime>
using namespace std;


//2、设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
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
	string tName = "教师";
	string sName = "学生";
	char nameSeed[] = "ABCDE";

	for (int i = 0; i < len; i++)
	{
		tArr[i].name = tName + nameSeed[i];
		for (int j = 0; j < 5; j++)
		{
			tArr[i].sArr[j].name = sName + nameSeed[j];
			tArr[i].sArr[j].score = rand() % 61 + 40;//0~99//伪随机
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
			cout << "\t学生姓名：" << tArr[i].sArr[j].name << "分数：" << tArr[i].sArr[j].score << endl;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL)); //定义随机初值
	//1、学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

	//3、学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

	Teacher tArr[3];
	Init(tArr, sizeof(tArr) / sizeof(tArr[0]));
	
	//4、最终打印出老师数据以及老师所带的学生数据
	print(tArr, sizeof(tArr) / sizeof(tArr[0]));


	return 0;
}