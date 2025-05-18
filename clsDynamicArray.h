#pragma once

#include <iostream>


template <typename T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	T* TempArray ;

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

	void Resize(int NewSize)
	{
		if (NewSize < 0 )
		{
			NewSize = 0;
		}

		TempArray = new T[NewSize];
			
		if (NewSize < _Size)
		{
			_Size = NewSize;
		}


			for (int i = 0; i < NewSize; i++)
			{
				TempArray[i] = OriginalArray[i];
				
			}

			_Size = NewSize;

			delete[] OriginalArray;
			OriginalArray = TempArray;	
		

		
	}

	T GetItem(int index)
	{
		return OriginalArray[index];
	}

	void Reverse()
	{
		TempArray = new T[_Size];


		for (int i = 0; i < _Size; i++)
		{
			TempArray[i] = OriginalArray[_Size - i - 1];
		}
		delete[]OriginalArray;
		OriginalArray = TempArray;
	}

	void Clear()
	{
		_Size = 0;
		TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = TempArray;
		
	}

};

