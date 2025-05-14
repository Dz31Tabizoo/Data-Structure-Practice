#pragma once
#include <iostream>

using namespace std;

template < typename T>
class clsDblLinkedList
{
protected:

	int _Size = 0;

public:

	class Node
	{
	public:
		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

	void InsertAtBeginning(T val)
	{
		Node* new_node = new Node();
		new_node->value = val;
		new_node->prev = NULL;
		new_node->next = head;

		if (head != NULL)
		{
			head->prev = new_node;
		}

		head = new_node;
		_Size++;
	}

	void PrintList()
	{
		Node* current = head;
		if (head == NULL)
		{
			cout << "\nList is Empty()";
		}

		while (current != NULL)
		{
			cout << "| " << current->value << " |";
			current = current->next;
		}
		cout << "\nSize = \a" << _Size << endl;
	}

	Node* Find(T Val)
	{
		Node* current = head;

		while (current != NULL)
		{
			if (current->value == Val)
			{
				return current;
			}
			current = current->next;
		}
		return NULL;
	}

	void InsertAfter(Node* Current,T val)
	{
		Node* NewNd = new Node();
		NewNd->value = val;
		NewNd->next = Current->next;
		NewNd->prev = Current;
		
		if (Current->next != NULL)
		{
			Current->next->prev = NewNd;
		}
		Current->next = NewNd;

		_Size++;
	}

	void InsertAtEnd(T val)
	{
		Node* Nw = new Node();
		Nw->value = val;
		Nw->next = NULL;

		if (head == NULL)
		{
			Nw->prev = NULL;
			head = Nw;
		}
		else
		{
			Node* last = head;

			while (last->next != NULL)
			{
				last = last->next;
			}
			Nw->prev = last;
			last->next = Nw;
		}
		_Size++;
	}

	void DeleteNode(Node* &Del_Node)
	{
		/// RAFIK's CODE :

		// empty List or empty Node
		if (head == NULL || Del_Node == NULL )
		{
			return;
		}

		// only one node in list
		if (Del_Node->next == nullptr && Del_Node->prev == NULL)
		{
			delete Del_Node;
			_Size--;
			return;
		}

		// first node
		if (Del_Node->prev == NULL)
		{
			head = Del_Node->next;
			Del_Node->next->prev = NULL;
			delete Del_Node;
			_Size--;
			return;
		}

		//last node
		if (Del_Node->next == NULL)
		{
			Del_Node->prev->next = NULL;
			delete Del_Node;
			_Size--;
			return;
		}
				
            Del_Node->next->prev = Del_Node->prev;
			Del_Node->prev->next = Del_Node->next;
			delete Del_Node;
		
			_Size--;
	}

	void DeleteFirstNode()
	{
		if (head == nullptr)
		{
			return;
		}

		Node* Temp = head;
		head = head->next;

		if (head != nullptr)
		{
			head->prev = nullptr;
		}
		delete Temp;
		_Size--;
	}

	void DeleteLastNode()
	{
		if (head == nullptr)
		{
			return;
		}

		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
			return;
		}


		Node* Temp = head;

		while (Temp->next != nullptr)
		{
			Temp = Temp->next;
		}

		if (Temp->prev != nullptr)
		{
			Temp->prev->next = nullptr;
		}
		
		delete Temp;
		_Size--;
	}

	int Size()
	{
		/// this take O(n)
		/*if (head == nullptr)
		{
			return 0;
		}
		int counter = 1;
        
		while (head->next != nullptr)
		{
			head = head->next;
			counter++;
		}
		return counter;*/

		/// using _Size++ && -- O(1)
		return _Size;
	}

	bool IsEmpty()
	{
		// Or return (head == nullptr) ? true : false;
		return (_Size == 0 ? true : false);
	}
    
	void Clear()
	{
		while (_Size > 0)
		{
			DeleteFirstNode();
		}
	}

	void Reverse()
	{
		if (head == nullptr || head->next==nullptr)
		{
			return;
		}
		Node* Last = head;

		while (Last->next != nullptr)
		{
			Last = Last->next;
		}
		// we are at the last node:
		head = Last;

		Last->next == Last->prev;

	}
};


