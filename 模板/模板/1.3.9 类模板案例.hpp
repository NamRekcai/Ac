#include <iostream>
using namespace std;

/*
��������:  ʵ��һ��ͨ�õ������࣬Ҫ�����£�

* ���Զ��������������Լ��Զ����������͵����ݽ��д洢
* �������е����ݴ洢������
* ���캯���п��Դ������������
* �ṩ��Ӧ�Ŀ������캯���Լ�operator= ��ֹǳ��������
* �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
* ����ͨ���±�ķ�ʽ���������е�Ԫ��
* ���Ի�ȡ�����е�ǰԪ�ظ��������������
*/

template <class T>
class MyArray
{
public:
	//���캯��
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		//��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			//���TΪ���󣬶��һ�����ָ�룬�������� = ����������Ϊ����ȺŲ��ǹ�����Ǹ�ֵ
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//����= ������    ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr[i];
		}
		return *this;
	}

	//β�巨
	void Push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}

		this->pAddress[m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void Pop_back()
	{
		if (this->m_Size == 0)
		{
			return;
		}

		this->m_Size--;
	}

	//����[]������ arr[0]
	//int i = arr[0];
	//arr[0] = 7;
	T& operator[](int index)
	{
		return this->pAddress[index]; //������Խ�磬�û��Լ�ȥ����
	}

	//��ȡ��������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//
	int getSize()
	{
		return this->m_Size;
	}

	//����
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	}

private:
	T* pAddress; //ָ��һ���ѿռ䣬����ռ�洢����������
	int m_Capacity; //����
	int m_Size; //��С
};