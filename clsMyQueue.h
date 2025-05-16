#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

template <class T>
class clsMyQueue
{
	// first in first out  FIFO
protected:
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
};

