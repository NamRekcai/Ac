#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0203()
{
	float f1 = 3.14;
	double d1 = 3.14;
	printf("f1=%f\n", f1);
	printf("d1=%lf\n", d1);
	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;
	
	cout << "float sizeof=" << sizeof(f1) << endl;
	cout << "double sizeof=" << sizeof(d1) << endl;

	cout << "float sizeof=" << sizeof(f1) << endl;
	cout << "double sizeof=" << sizeof(d1) << endl;
	
	float f2 = 3e2;
	printf("f2=%g\n", f2);
	cout << "f2=" << f2 << endl;
	
	float f3 = 3e-2;
	printf("f3=%g\n", f3);
	cout << "f3=" << f3 << endl;
	return 0;
}