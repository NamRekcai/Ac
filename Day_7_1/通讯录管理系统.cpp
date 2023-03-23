#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

struct Person
{
	string m_Name; //姓名
	int m_Sex; //性别
	int m_Age; //年龄
	string m_phone; //电话号码
	string m_addr; //住址

};

struct Addressbooks
{
	struct Person personArray[MAX]; //通讯录中保存的联系人数组
	int m_Size; //通讯录中的人员个数


};

//封装函数显示该界面
void showMenu()
{
	cout << "***********************" << endl;
	cout << "*****1、添加联系人*****" << endl;
	cout << "*****2、显示联系人*****" << endl;
	cout << "*****3、删除联系人*****" << endl;
	cout << "*****4、查找联系人*****" << endl;
	cout << "*****5、修改联系人*****" << endl;
	cout << "*****6、清空通讯录*****" << endl;
	cout << "*****0、退出通讯录*****" << endl;
	cout << "***********************" << endl;

}

void addPerson(Addressbooks* abs)
{
	//判断电话本是否满人
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl << "2 -- 女" << endl;
		int sex = 0;
		while (1)//数据验证
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
				cout << "输入有误，请重新输入" << endl;
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		//必要时可进行数据验证
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address = "";
		cin >> address;
		abs->personArray[abs->m_Size].m_addr = address;

		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
	}
}

void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
		system("pause");
		return;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_phone << "\t";
			cout << "住址：" << abs->personArray[i].m_addr << endl;
		}
		system("pause");
	}
}

//封装检测联系人是否存在
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray->m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//封装删除联系人函数
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人：" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(abs, name);
	if (ret!= -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
}

void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << endl;
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << endl;
		cout << "年龄：" << abs->personArray[ret].m_Age << endl;
		cout << "电话：" << abs->personArray[ret].m_phone << endl;
		cout << "住址：" << abs->personArray[ret].m_addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;

	}
	system("pause");
}

//修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请您输入您要修改的联系人：" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(abs, name);
	
	if (ret != -1)
	{
		//姓名
		string modify_name;
		cout << "请输入姓名：" << endl;
		cin >> modify_name;
		abs->personArray[ret].m_Name = modify_name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl << "2 -- 女" << endl;
		int sex = 0;
		while (1)//数据验证
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
				cout << "输入有误，请重新输入" << endl;
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		//必要时可进行数据验证
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address = "";
		cin >> address;
		abs->personArray[ret].m_addr = address;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
}

//清空联系人
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
}

int main()
{
	//创建通讯录
	Addressbooks abs;
	//初始化通讯录中人数为0
	abs.m_Size = 0;

	int select = 0;
	
	while (1)
	{
		system("cls");

		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	

	system("pause");
	return 0;
}

