#include <memory>
#include <iostream>
#include <assert.h>
#include <windows.h>
#include <vector>

template <typename T>
class Vector
{

//������
public:
	Vector()
	{
		Begin = new T[4]();
		MemSize = 4;
	}

	~Vector() {}
	
	//�μ� �ϳ��� ������ �⺻ �����ڷ� Resize;
	Vector(size_t _Size)
	{
		Begin = new T[_Size]();
		MemSize = _Size;
		ElementSize = _Size;
	}

	//�μ��� �ΰ��� ������, �ش� �����ͷ� Resize;
	Vector(size_t _Size, const T& _Data)
	{
		Begin = new T[_Size]();
		
		for (int i = 0; i < _Size; i++)
		{
			Begin[i] = std::move(_Data);
		}

		MemSize = _Size;
		ElementSize = _Size;
	}

//������ �����ε�
public:
	T& operator[](int _Index)
	{
		if (_Index >= ElementSize)
		{
			MessageBoxA(NULL, "�ε��� �ʰ�", "�˸�", MB_OK);
			assert(false);
		}

		return Begin[_Index];
	}

//���
public:
	void push_back(T _Data)
	{
		if (ElementSize >= MemSize)
		{
			resize(static_cast<size_t>(MemSize * 1.5));
		}

		Begin[ElementSize] = _Data;
		ElementSize++;
	}

	/*
	* �޸𸮸� ���� �Ҵ��ϰ�
	* ������ �����͸� �ű��
	* ������ �޸𸮸� �����Ѵ�.
	*/
	void resize(size_t _Size)
	{
		T* NewVector = new T[_Size]();

		for (int i = 0; i < _Size; i++)
		{
			if (i >= ElementSize)
			{
				NewVector[i] = std::move(T());
				continue;
			}

			NewVector[i] = std::move(Begin[i]);
		}

		delete(Begin);
		Begin = NewVector;

		ElementSize = _Size;
		MemSize = _Size;
	}

	void reserve(size_t _Size)
	{
		if (MemSize >= _Size)
		{
			return;
		}

		T* NewVector = new T[_Size]();

		for (int i = 0; i < ElementSize; i++)
		{
			NewVector[i] = std::move(Begin[i]);
		}

		delete(Begin);
		Begin = NewVector;
		MemSize = _Size;
	}

	size_t size()
	{
		return ElementSize;
	}

private:

	T* Begin = nullptr;

	size_t ElementSize = 0;
	size_t MemSize = 0;
};

int main()
{
	Vector<int> A;
	A.resize(10);

	for (int i = 0; i < A.size(); i++)
	{
		std::cout << A[i] << std::endl;
	}

	int a = 0;
};