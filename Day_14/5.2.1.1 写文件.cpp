#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>

using namespace std;



int main()
{
	ofstream ofs;
	//ofs.open("1/test.txt", ios::out);	//相对路径
	ofs.open("E:/test.txt", ios::out);	//绝对路径

	ofs << "姓名：李四" << endl;
	ofs << "性别：女" << endl;
	ofs << "年龄：19" << endl;

	ofs.close();

	return 0;
}