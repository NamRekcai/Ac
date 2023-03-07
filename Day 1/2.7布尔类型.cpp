#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0207()
{
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;

	flag = 100;
	cout << flag << endl;
	flag = -100;
	cout << flag << endl;
	//假为0，真为非0
	//真存1，假存0

	cout <<"sizeof(flag)=" << sizeof(flag) << endl;

	return 0;
}