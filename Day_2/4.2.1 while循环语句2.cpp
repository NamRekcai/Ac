#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main04020102()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 100+1;
	int input = 0;

	while (1)
	{
		cin >> input;
		if (input > num)
		{
			cout << "大了" << endl;
		}
		else if (input < num)
		{
			cout << "小了" << endl;
		}
		else
		{
			cout << "恭喜您，猜对了！" << endl;
			break;
		}
	}
	
	return EXIT_SUCCESS;
}