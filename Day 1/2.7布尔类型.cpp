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
	//��Ϊ0����Ϊ��0
	//���1���ٴ�0

	cout <<"sizeof(flag)=" << sizeof(flag) << endl;

	return 0;
}