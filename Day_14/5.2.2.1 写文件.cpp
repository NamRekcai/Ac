#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;

};

int main()
{
	ofstream ofs("Person.txt", ios::binary | ios::out);
	Person p = { "уехЩ,18" };
	ofs.write((const char*)&p, sizeof(p));

	ofs.close();
	return 0;
}