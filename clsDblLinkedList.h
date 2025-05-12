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

};


