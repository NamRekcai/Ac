#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0304()
{
	int a = 10;
	int b = 20;
	cout << !a << endl; //0
	cout << !!a << endl; //1
	//真变假 假变真

	b = 0;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	//&& 同真为真，否则为假
	//|| 同假为假，其余为真
	return 0;
}