#pragma once
#include "clsMyQueue.h"
#include <iostream>



template <class T>

class clsMyStack : public clsMyQueue <T>
{


public:

void Push(T item)
{
	clsMyQueue <T> ::_MyList.InsertAtBeginning(item);

}

T Top()
{
	return clsMyQueue<T>::Front();
}

T Bottom()
{
	return clsMyQueue<T> ::Back();
}
};

