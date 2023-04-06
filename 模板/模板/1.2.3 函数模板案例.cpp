#include <iostream>
using namespace std;

/*
* ���ú���ģ���װһ������ĺ��������Զ�**��ͬ������������**��������
* �������Ӵ�С�������㷨Ϊ**ѡ������**
* �ֱ�����**char����**��**int����**���в���
*/

template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort(T arr[], int len)
{
	//����ѡ�����򣬽��ж�����Ӵ�С������
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶���������±�
		for (int j = i + 1; j < len; j++)
		{
			//�϶����ֵ�ȱ���������ֵС��˵��j�±�Ԫ�ز������������ֵ
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i) //�����������±겻��i����������
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

template<class T>
void printfArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void test01()
{
	char charArr[] = { 'b', 'd', 'c', 'f', 'e', 'a', 'g', 'h' };
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printfArray(charArr, num);
}

void test02()
{
	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printfArray(intArr, num);
}

int main()
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}