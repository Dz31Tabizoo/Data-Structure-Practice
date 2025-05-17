#pragma once
#include 'clsDblLinkedList'

template <class T>
class clsMyStack
{
protected:
clsDblLinkedlist <int> _Mylist;

public:

void Push() 
{
   _Mylist.InsertAtBeginning();
}



};

