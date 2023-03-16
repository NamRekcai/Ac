#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040101()
{
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;

	cout << "您的输入是：" << score << endl;

	//if语句：如果满足条件则执行里面的代码

	if (score > 600)
	{
		cout << "我考上了一本大学！" << endl;
		if (score > 700)
		{
			cout << "我考上了北大" << endl;
		}
		else if (score > 650)
		{
			cout << "我考上了清华" << endl;
		}
		else
		{
			cout << "我考上了人大" << endl;
		}
	}
	else if(score>500)
	{
		cout << "我考上二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "我考上三本大学" << endl;
	}
	else
	{
		cout << "我没有考上本科" << endl;
	}
	return 0;
}