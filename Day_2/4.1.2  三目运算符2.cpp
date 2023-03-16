#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main04010202()
{
	int a = 30;
	int b = 20;
	int c = 10;
	
	cout << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << endl;


	return 0;
}
