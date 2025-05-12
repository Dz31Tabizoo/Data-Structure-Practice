#include <iostream>
#include"clsDblLinkedList.h"

using namespace std;









int main()
{
    clsDblLinkedList<int> MydblLinkedList;

    
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
}

