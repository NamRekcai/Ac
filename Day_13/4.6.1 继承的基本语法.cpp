#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//公共部分
class BasePage
{
public:
	void header()
	{
		cout << "君的小站、说说&日志、极客生活、搜索...（公共头部）" << endl;
	}

	void footer()
	{
		cout << "到底啦~感谢您的浏览：-D（公共底部）" << endl;
	}

	void left()
	{
		cout << "作者的其他站点、关于我...（公共分类列表）" << endl;
	}
};

//说说&日志
class Diary:public BasePage
{
public:
	

	void content()
	{
		cout << "说说&日志页面" << endl;
	}
};

//极客生活
class Geeker :public BasePage
{
public:
	

	void content()
	{
		cout << "极客生活页面" << endl;
	}
};

//搜索页面
class Search :public BasePage
{
public:
	

	void content()
	{
		cout << "搜索页面" << endl;
	}
};

void test01()
{
	//说说&日志
	cout << "说说&日志页面如下：" << endl;

	Diary diary;
	diary.header();
	diary.footer();
	diary.left();
	diary.content();
	cout << "---------------------------" << endl;

	//极客生活页面
	cout << "Geeker页面如下： " << endl;
	Geeker geeker;
	geeker.header();
	geeker.footer();
	geeker.left();
	geeker.content();
	cout << "---------------------------" << endl;

	//搜索页面
	cout << "搜索页面如下： " << endl;
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