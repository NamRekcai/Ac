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
		cout << "�ļ���ʧ��" << endl;
		return -1;
	}
	else
		cout << "�ļ��򿪳ɹ�" << endl;

	//��һ�ַ�ʽ
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;;
	}*/

	//�ڶ��ַ�ʽ
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//�����ַ�ʽ
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//�����ַ�ʽ
	/*char c;
	while((c = ifs.get()) != EOF)
	{
		cout << c;
	}*/

	ifs.close();

	return 0;
}