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
		if (IsEmpty())
		{
			cout << "Empty Array...";
		}
		cout << "\n------------------------------------------------" << endl;
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

	bool DeleteItemAt(int index)
	{
		if (index > _Size || index < 0)
		{
			cout << "\nImpossible Delete check your Index...";
			return false;
		}

		_Size--;
		TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			TempArray[i] = OriginalArray[i];
		}

		for (int i = index + 1 ;  i < _Size + 1; i++)
		{
			/// watch out for i - 1 
			TempArray[i-1] = OriginalArray[i];
		}


		delete[] OriginalArray;
		OriginalArray = TempArray;
		return true;

	}

	void DeleteFirstItem()
	{
		if (_Size == 0)
		{
			return;
		}
		_Size--;

		TempArray = new T[_Size];

		for (int i = 1; i < _Size + 1; i++)
		{
			TempArray[i-1] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = TempArray;

		///---------------------------

		// or Use DeletItem(0);
	}

	void DeleteLastItem()
	{
		if (_Size == 0)
		{
			return;
		}
		_Size--;

		TempArray = new T[_Size];

		for (int i = 0; i < _Size; i++)
		{
			TempArray[i] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = TempArray;

		///-----------------

	}//Use DeleteItem(_Size -1);

	int Find(T Value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Value)
			{
				return i;
			}
		}
		return -1;
	}

	bool DeleteItem(T val)
	{
		int index = Find(val);
		if (index == -1)
		{
			return false;
		}

		DeleteItemAt(index);
		return true;
	}
	
	bool InsertAt(T index, T value) {
		if (index > _Size || index < 0) {
			return false;
		}

		_Size++;
		TempArray = new T[_Size];

		// Copy all before index
		for (int i = 0; i < index; i++) {
			TempArray[i] = OriginalArray[i];
		}

		TempArray[index] = value;

		// Copy all after index
		for (int i = index; i < _Size - 1; i++) {
			TempArray[i + 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = TempArray;
		return true;
	}
	
	void InsertAtBeginning(T Val)
	{
		_Size++;
		TempArray = new T[_Size];
		TempArray[0] = Val;
     	for (int i = 1; i <= _Size-1; i++)
		{
			TempArray[i] = OriginalArray[i-1];
		}
		delete[] OriginalArray;
		OriginalArray = TempArray;
	}

	void InsertAtEnd(T Val)
	{
		_Size++;
		TempArray = new T[_Size];

		TempArray[_Size-1] = Val;

		for (int i = 0; i < _Size-1; i++)
		{
			TempArray[i] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = TempArray;
	}

	bool InsertAfter (int index, T Value) {
		if (index > _Size || index < -2) {
			return false;
		}

		_Size++;
		TempArray = new T[_Size];
		int Pos = index + 1;

		for (int i = 0; i <= index; i++) {
			TempArray[i] = OriginalArray[i];
		}

		for (int i = Pos; i < _Size; i++) {
			if (Pos == i) {
				TempArray[Pos] = Value;
				i++;
			}
			TempArray[i] = OriginalArray[i - 1];
		}

		delete[] OriginalArray;
		OriginalArray = TempArray;
		return true;
	}

	void InsertAt_Beginning(T value)
	{

		InsertAt(0, value);

	}


	bool Insert_Before(T index, T value)
	{
		if (index < 1)
			return InsertAt(0, value);
		else
			return InsertAt(index - 1, value);

	}

	bool Insert_After(T index, T value)
	{
		if (index >= _Size)
			return InsertAt(_Size - 1, value);
		else
			return InsertAt(index + 1, value);

	}

	bool Insert_AtEnd(T value)
	{

		return InsertAt(_Size, value);

	}
};

