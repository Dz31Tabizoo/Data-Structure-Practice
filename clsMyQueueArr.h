#pragma once
#include "clsDynamicArray.h"

template <typename T>
class clsMyQueueArr
{
protected:
	clsDynamicArray <T> _MyQArr;

public:
	
	void Push(T Val)
	{
		_MyQArr.InsertAtEnd(Val);
	}
	
	void Pop()
	{
		_MyQArr.DeleteFirstItem();
	}
	
	void Print()
	{
		_MyQArr.print();
	}
	int Size()
	{
		return _MyQArr.Size();
	}
	bool IsEmpty()
	{
		return _MyQArr.IsEmpty();
	}
	T Front()
	{
		return _MyQArr.GetItem(0);
	}
	T Back()
	{
		return _MyQArr.GetItem(Size() - 1);
	}

	T GetItem(int index)
	{
		return _MyQArr.GetItem(index);
	}

	void Reverse()
	{
		_MyQArr.Reverse();
	}
	

	void InsertAfter(int dex, T Vall)
	{
		_MyQArr.InsertAfter(dex, Vall);
	}

	void InsertAtFront(T Value)
	{
		_MyQArr.InsertAtBeginning(Value);
	}
	void InsertAtBack(T Valu)
	{
		_MyQArr.InsertAtEnd(Valu);
	}
	void Clear()
	{
		_MyQArr.Clear();
	}



};

