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
			cout << "����" << endl;
		}
		else if (input < num)
		{
			cout << "С��" << endl;
		}
		else
		{
			cout << "��ϲ�����¶��ˣ�" << endl;
			break;
		}
	}
	
	return EXIT_SUCCESS;
}