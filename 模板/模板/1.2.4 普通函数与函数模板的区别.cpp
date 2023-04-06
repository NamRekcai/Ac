#include <iostream>
using namespace std;

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	cout << myAdd01(a, c) << endl;//正确的，将char类型的'c'隐式转换为int类型，'c'对应的ASCII是99
	//myAdd02(a, c);
	cout << myAdd02<int>(a, c) << endl;//正确的，如果用显示指定类型，可以发生隐式类型转换
}

int main()
{
	test01();
	return EXIT_SUCCESS;
}