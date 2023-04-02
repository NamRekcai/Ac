#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return -1;
	}
	else
		cout << "文件打开成功" << endl;

	//第一种方式
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;;
	}*/

	//第二种方式
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//第三种方式
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//第四种方式
	/*char c;
	while((c = ifs.get()) != EOF)
	{
		cout << c;
	}*/

	ifs.close();

	return 0;
}