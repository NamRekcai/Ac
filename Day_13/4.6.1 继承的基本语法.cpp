#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//��������
class BasePage
{
public:
	void header()
	{
		cout << "����Сվ��˵˵&��־�������������...������ͷ����" << endl;
	}

	void footer()
	{
		cout << "������~��л���������-D�������ײ���" << endl;
	}

	void left()
	{
		cout << "���ߵ�����վ�㡢������...�����������б�" << endl;
	}
};

//˵˵&��־
class Diary:public BasePage
{
public:
	

	void content()
	{
		cout << "˵˵&��־ҳ��" << endl;
	}
};

//��������
class Geeker :public BasePage
{
public:
	

	void content()
	{
		cout << "��������ҳ��" << endl;
	}
};

//����ҳ��
class Search :public BasePage
{
public:
	

	void content()
	{
		cout << "����ҳ��" << endl;
	}
};

void test01()
{
	//˵˵&��־
	cout << "˵˵&��־ҳ�����£�" << endl;

	Diary diary;
	diary.header();
	diary.footer();
	diary.left();
	diary.content();
	cout << "---------------------------" << endl;

	//��������ҳ��
	cout << "Geekerҳ�����£� " << endl;
	Geeker geeker;
	geeker.header();
	geeker.footer();
	geeker.left();
	geeker.content();
	cout << "---------------------------" << endl;

	//����ҳ��
	cout << "����ҳ�����£� " << endl;
	Search search;
	search.header();
	search.footer();
	search.left();
	search.content();
}

int main()
{
	test01();
	return 0;
}