#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

#define NUMMAX 10000
#define BUCKETMAX 10

typedef int Type;

void test(Type arrNum[],int arrNumMax)
{
	for (int i = 0; i < arrNumMax;i++)
	{
		int num = rand( )%1000;
		arrNum[i] = num;
	}
}

void showArray(Type arrNum[], int arrNumMax)
{
	for (int i = 0; i < arrNumMax; i++)
	{
		cout << arrNum[i] << "\t";
	}
}

void newBucket(Type* arrBucketAddr[], int arrBucketAddrMax, int arrNumMax)//»òType**arrBucket
{
	int i = 0;
	for (i = 0; i < arrBucketAddrMax; i++)
	{
		arrBucketAddr[i] = new Type[arrNumMax];
	}
}

int calcDigits(Type num)
{
	int i = 0;
	if (num == 0)
		return 1;
	for (i = 0; num != 0; num /= 10, i++);
	return i;
}

void sortNumToBucket(Type arrNum[], int arrNumMax, Type* arrBucketAddr[],
	int arrBucketAddrMax, int BucketFlag[], int nowDigits,int way)
{
	int i = 0;
	int j = 0;
	if (way == 1)
	{
		for (i = 0; i < arrNumMax; i++)
		{
			for (j = 0; j < arrBucketAddrMax; j++)
			{
				if (arrNum[i] /(int) pow(arrBucketAddrMax,nowDigits) % arrBucketAddrMax == j)
				{
					*(arrBucketAddr[j]+BucketFlag[j]) = arrNum[i];
					BucketFlag[j]++;
					break;
				}
			}
		}
	}
	else if (way == 2)
	{

	}
}

Type findMax(Type arrNum[], int arrNumMax)
{
	int i = 0;
	Type max = arrNum[0];
	for (i = 0; i < arrNumMax; i++)
	{
		if (arrNum[i] > max)
			max = arrNum[i];
	}
	return max;
}

void sortBucketToNum(Type arrNum[], int arrNumMax, Type* arrBucketAddr[],
	int arrBucketAddrMax, int Bucketflag[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < arrNumMax;)
	{
		for (j = 0; j < arrBucketAddrMax; j++)
		{
			for (k = 0; k < Bucketflag[j]; k++)
			{
				arrNum[i] = *(arrBucketAddr[j] + k);
				i++;
			}
			Bucketflag[j] = 0;
		}
	}
}

void bucketSort(Type arrNum[],int arrNumMax,int way)
{
	Type** arrBucketAddr = new Type * [BUCKETMAX];
	int BucketFlag[BUCKETMAX] = { 0 };

	newBucket(arrBucketAddr, BUCKETMAX, arrNumMax);
	Type max = findMax(arrNum, arrNumMax);
	int maxDigits = calcDigits(max);
	for (int nowDigits = 0; nowDigits < maxDigits; nowDigits++)
	{
		sortNumToBucket(arrNum, arrNumMax, arrBucketAddr, BUCKETMAX, BucketFlag, nowDigits,way);
		sortBucketToNum(arrNum, arrNumMax, arrBucketAddr, BUCKETMAX, BucketFlag);
	}
	//void deleteBucket();
	delete arrBucketAddr;
}

int maintpx()
{
	srand((unsigned int)time(NULL));
	Type* arrNum = new Type[NUMMAX];
	test(arrNum, NUMMAX);
	bucketSort(arrNum, NUMMAX, 1);

	showArray(arrNum, NUMMAX);

	delete arrNum;
	return 0;
}