#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

template <class T>
class clsMyQueue
{
	// first in first out  FIFO
protected:

	// composition not inherritance
	clsDblLinkedList <T> _MyList;

public :

	void push(T item)
	{
		_MyList.InsertAtEnd(item);
	}
	void Pop()
	{
		_MyList.DeleteFirstNode();
	}
	void Print()
	{
		_MyList.PrintList();
	}
	int Size()
	{
		return _MyList.Size();
	}
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}
	T Front()
	{
		return _MyList.GetItem(0);
	}
	T Back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	T GetItem(int index)
	{
		return _MyList.GetItem(index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}
	void UpdateItem(int indx, T Value)
	{
		_MyList.UpdateItem(indx, Value);
	}

	void InsertAfter(int dex, T Vall)
	{
		_MyList.InsertAfter(dex, Vall);
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBeginning(Value);
	}
	void InsertAtBack(T Valu)
	{
		_MyList.InsertAtEnd(Valu);
	}
	void Clear()
	{
		_MyList.Clear();
	}
};

