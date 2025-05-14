#pragma once
#include <iostream>

using namespace std;

template < typename T>
class clsDblLinkedList
{

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
		cout << "\n\a";
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
			return;
		}

		// first node
		if (Del_Node->prev == NULL)
		{
			head = Del_Node->next;
			Del_Node->next->prev = NULL;
			delete Del_Node;
			return;
		}

		//last node
		if (Del_Node->next == NULL)
		{
			Del_Node->prev->next = NULL;
			delete Del_Node;
			return;
		}
				
            Del_Node->next->prev = Del_Node->prev;
			Del_Node->prev->next = Del_Node->next;
			delete Del_Node;
		
		
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

		Temp->prev->next = nullptr;
		delete Temp;

	}
};


