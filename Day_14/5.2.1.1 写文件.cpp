#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>

using namespace std;



int main()
{
	ofstream ofs;
	//ofs.open("1/test.txt", ios::out);	//���·��
	ofs.open("E:/test.txt", ios::out);	//����·��

	ofs << "����������" << endl;
	ofs << "�Ա�Ů" << endl;
	ofs << "���䣺19" << endl;

	ofs.close();

	return 0;
}