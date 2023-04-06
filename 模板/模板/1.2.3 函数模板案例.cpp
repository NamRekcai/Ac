#include <iostream>
using namespace std;

/*
* 利用函数模板封装一个排序的函数，可以对**不同数据类型数组**进行排序
* 排序规则从大到小，排序算法为**选择排序**
* 分别利用**char数组**和**int数组**进行测试
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
	//利用选择排序，进行对数组从大到小的排序
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大数的下标
		for (int j = i + 1; j < len; j++)
		{
			//认定最大值比遍历出的数值小，说明j下标元素才是真正的最大值
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i) //如果最大数的下标不是i，交换两者
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