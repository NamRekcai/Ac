#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

struct Person
{
	string m_Name; //����
	int m_Sex; //�Ա�
	int m_Age; //����
	string m_phone; //�绰����
	string m_addr; //סַ

};

struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼�е���Ա����


};

//��װ������ʾ�ý���
void showMenu()
{
	cout << "***********************" << endl;
	cout << "*****1�������ϵ��*****" << endl;
	cout << "*****2����ʾ��ϵ��*****" << endl;
	cout << "*****3��ɾ����ϵ��*****" << endl;
	cout << "*****4��������ϵ��*****" << endl;
	cout << "*****5���޸���ϵ��*****" << endl;
	cout << "*****6�����ͨѶ¼*****" << endl;
	cout << "*****0���˳�ͨѶ¼*****" << endl;
	cout << "***********************" << endl;

}

void addPerson(Addressbooks* abs)
{
	//�жϵ绰���Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl << "2 -- Ů" << endl;
		int sex = 0;
		while (1)//������֤
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
				cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		//��Ҫʱ�ɽ���������֤
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address = "";
		cin >> address;
		abs->personArray[abs->m_Size].m_addr = address;

		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
	}
}

void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
		system("pause");
		return;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_addr << endl;
		}
		system("pause");
	}
}

//��װ�����ϵ���Ƿ����
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

//��װɾ����ϵ�˺���
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
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
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
}

void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << endl;
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << endl;
		cout << "���䣺" << abs->personArray[ret].m_Age << endl;
		cout << "�绰��" << abs->personArray[ret].m_phone << endl;
		cout << "סַ��" << abs->personArray[ret].m_addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;

	}
	system("pause");
}

//�޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "����������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(abs, name);
	
	if (ret != -1)
	{
		//����
		string modify_name;
		cout << "������������" << endl;
		cin >> modify_name;
		abs->personArray[ret].m_Name = modify_name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl << "2 -- Ů" << endl;
		int sex = 0;
		while (1)//������֤
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
				cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		//��Ҫʱ�ɽ���������֤
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address = "";
		cin >> address;
		abs->personArray[ret].m_addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
}

//�����ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
}

int main()
{
	//����ͨѶ¼
	Addressbooks abs;
	//��ʼ��ͨѶ¼������Ϊ0
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
			cout << "��ӭ�´�ʹ��" << endl;
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

