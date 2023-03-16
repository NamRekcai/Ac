#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040103()
{
	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;

	switch (score)//表达式类型只能是整型或者是字符型
	{
	case 10:case 9:
		cout << "经典" << endl;
		break;
	case 8:case7:
		cout << "非常好" << endl;
		break;
	case 6:case5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
	return 0;
}