#include <iostream>
#include"clsDblLinkedList.h"

using namespace std;









int main()
{
    clsDblLinkedList<int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
        cout << "List is Empty...\n";
    else
        cout << "List is not empty\n";

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    MydblLinkedList.PrintList();


    clsDblLinkedList <int> ::Node* N1 = MydblLinkedList.Find(2);
    if (N1 != NULL)
    {
        cout << "\n Node With Value \"2\ found ^_^\n";
    }
    else
    {
        cout << "\n Node not found -_-\n";
    }

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\n Node After Insert '500' After '2' ^_^\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(999);
    cout << "\n Node After Insert '999' at the End ^_^\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList <int> ::Node* N2 = MydblLinkedList.Find(999);
    MydblLinkedList.DeleteNode(N2);
    cout << "\n Node After Delete '999' ^_^\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    MydblLinkedList.DeleteLastNode();
    cout << "\n Node After Delete first and last Node ^_^\n";
    MydblLinkedList.PrintList();
    
    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

};

