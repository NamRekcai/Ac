#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0204()
{
	char ch = 'a';
	cout << ch << endl;
	printf("%c\n", ch);
	
	cout << sizeof(ch) << endl;
	ch = 98;
	cout << ch << endl;

	ch = 'a';
	cout << (int)ch << endl;
	printf("%d\n", ch);
	return 0;
}