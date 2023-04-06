#include<iostream>
using namespace std;
#include "1.3.9 ��ģ�尸��.hpp"

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//�������õ���������
void test01()
{
	MyArray<int> arr1(10);
	for (int i = 0; i < 10; i++)
	{
		arr1.Push_back(i);
	}
	printIntArray(arr1);
	cout << "arr1�Ĵ�С: " << arr1.getSize() << endl;
	cout << "arr1������: " << arr1.getCapacity() << endl;
	cout << "arr1[3] = " << arr1[3] << endl;
	cout << "----------------------------" << endl;
	MyArray<int> arr2(arr1);
	arr2.Pop_back();
	printIntArray(arr2);
	cout << "arr2�Ĵ�С: " << arr2.getSize() << endl;
	cout << "arr2������: " << arr2.getCapacity() << endl;
}

//�����Զ�����������
class Person
{
public:
	Person() {}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "����: " << arr[i].m_Name << " ����: " << arr[i].m_Age << endl;
	}
	cout << endl;
}

void test02()
{
	MyArray<Person> arr3(10);

	Person p1("�����", 30);
	Person p2("����", 20);
	Person p3("槼�", 18);
	Person p4("���Ѿ�", 15);
	Person p5("����", 24);

	arr3.Push_back(p1);
	arr3.Push_back(p2);
	arr3.Push_back(p3);
	arr3.Push_back(p4);
	arr3.Push_back(p5);

	printPersonArray(arr3);
	cout << "arr3�Ĵ�С: " << arr3.getSize() << endl;
	cout << "arr3������: " << arr3.getCapacity() << endl;
	cout << "arr3[3] = " << arr3[3].m_Name << endl;

}

int main()
{
	//test01();
	test02();
	return 0;
}