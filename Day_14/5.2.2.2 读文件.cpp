#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;

int main()
{
	ifstream ifs("person.txt", ios::binary | ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败!" << endl;
		return -1;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));

	cout << p.m_Name << " " << p.m_Age << endl;

	return 0;
}
