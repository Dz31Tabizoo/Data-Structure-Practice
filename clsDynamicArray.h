#pragma once

#include <iostream>


template <typename T>
class clsDynamicArray
{
protected:
	int _Size = 0;


public:
	T* OriginalArray;

	//constractor
	clsDynamicArray(int Size = 0)
	{
		if (Size<0)
		{
			Size = 0;
		}
		_Size = Size;
		OriginalArray = new T[_Size];
	}

	//Destractor
	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	//to fill original array
	bool SetItem(int Index, T Value)
	{
		if (Index >= _Size || _Size < 0)
		{
			return false;
		}
		OriginalArray[Index] = Value;
		return true;

	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void print()
	{
		cout << "\n";
		for (int i = 0; i < _Size; i++)
		{
			cout << " | " << OriginalArray[i] << " | ";
		}
		cout << endl;
	}

};

