#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"
#include "clsMyQueueArr.h"

#include "clsMyString.h"

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

    MydblLinkedList.Reverse();
    cout << "\n Node After reverse ^_^\n";
    MydblLinkedList.PrintList();


    clsDblLinkedList <int> ::Node* X;
    X = MydblLinkedList.GetNode(2);
    cout << "\n Node Value OF INDEX 2 Is: " << X->value;

    
    cout << "\n item of index 0 =  " << MydblLinkedList.GetItem(0) << endl;


    MydblLinkedList.UpdateItem(0, 333);
    MydblLinkedList.PrintList();


    cout << "\n After insert 111 after index '2':\n" ;
    MydblLinkedList.InsertAfter(2, 111);
    MydblLinkedList.PrintList();

    system("cls");

    cout << "\n ---- clear List : go Queue ----------" << endl;

    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);
    MyQueue.push(60);

    cout << "\nMy Queue: ";
    MyQueue.Print();

    cout << "\nMy Queue Size = " << MyQueue.Size() << endl;
    cout << "\nMy Queue Front = " << MyQueue.Front() << endl;
    cout << "\nMy Queue Back = " << MyQueue.Back() << endl;


    MyQueue.Pop();
    
    cout << "\nMy Queue after 1 Pop : ";
    MyQueue.Print();

    cout << "\n\n Item (2) = " << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\nMy Queue after Reverse : ";
    MyQueue.Print();
    
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nMy Queue after update imem(2) to 600 :   ";
    MyQueue.Print();

    MyQueue.InsertAfter(2, 800);
    cout << "\n\nMy Queue after update imem(2) to 300 :   ";
    MyQueue.Print();

    MyQueue.InsertAtFront(1000);
    cout << "\n\nMy Queue after  1000 At Front :   ";
    MyQueue.Print();

    MyQueue.InsertAtBack(2000);
    cout << "\n\nMy Queue after Insert 2000 At Back  :   ";
    MyQueue.Print();

    MyQueue.Clear();
    cout << "\n\nMy Queue after Clear :   ";
    MyQueue.Print();

    cout << "\n ------------- STACK --------------------\n";

    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    cout << "\nStack: \n";
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Top: " << MyStack.Top();
    cout << "\nStack Bottom: " << MyStack.Bottom();

    MyStack.Pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.Print();

    //Extension #1
    cout << "\n\n Item(2) : " << MyStack.GetItem(2);

    //Extension #2
    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();

    //Extension #3
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();

    //Extension #4
    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();


    //Extension #5
    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();

    //Extension #6
    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();

    //Extension #7
    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();
    system("cls");
    cout << "\n ------------- Dynamic Array --------------------\n";


    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0,10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);


    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.print();

    /*MyDynamicArray.Resize(2);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after resize to 2 : \n";
    MyDynamicArray.print();

    MyDynamicArray.Resize(10);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after resize to 10 : \n";
    MyDynamicArray.print();*/


    MyDynamicArray.Reverse();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after Reverse: \n";
    MyDynamicArray.print();


    cout << "\n\n Item (2) = " << MyDynamicArray.GetItem(2);


    /// clear and Deletes Tests
   /* MyDynamicArray.Clear();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after Clear: \n";
    MyDynamicArray.print();




    MyDynamicArray.DeleteItemAt(2);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after Delete Item (2): \n";
    MyDynamicArray.print();


    MyDynamicArray.DeleteFirstItem();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after Delete First Item : \n";
    MyDynamicArray.print();


    MyDynamicArray.DeleteLastItem();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after Delete Last Item : \n";
    MyDynamicArray.print();

    */


    int Index = MyDynamicArray.Find(30);
    if (Index == -1)
    {
        cout << "\nItem was not found...";
    }
    else
    {
        cout << "\n30 is Found at Index : " << Index << endl;
    }


    MyDynamicArray.DeleteItem(30);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items aftr Delete Item 30; \n";
    MyDynamicArray.print();


    MyDynamicArray.InsertAt(1, 777);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after insert 777 after index 1 \n";
    MyDynamicArray.print();


    MyDynamicArray.InsertAtBeginning(111);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after insert 111 at beginning \n";
    MyDynamicArray.print();

    MyDynamicArray.InsertAtEnd(999);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after insert 999 at beginning \n";
    MyDynamicArray.print();


    system("cls");
    cout << "\n ------------- Queue Arrray --------------------\n";


    clsMyQueueArr <int> Q_Arr_OBJ;

    Q_Arr_OBJ.Push(10);
    Q_Arr_OBJ.Push(20);
    Q_Arr_OBJ.Push(30);
    
    cout << "\nArray Size: " << Q_Arr_OBJ.Size() << "\n";
    Q_Arr_OBJ.Print();

    Q_Arr_OBJ.Pop();
    cout << "\nArray Items afterPop \n";
    Q_Arr_OBJ.Print();

    cout << "\n ------------- undo / redo --------------------\n";

    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    clsMyString S1;

    cout << "\nS1  = " << S1.TEXT << "\n";

    S1.TEXT = "Mohammed";

    cout << "S1  = " << S1.TEXT << "\n";

    S1.TEXT = "Mohammed2";

    cout << "S1  = " << S1.TEXT << "\n";

    S1.TEXT = "Mohammed3";

    cout << "S1  = " << S1.TEXT << "\n";

    cout << "\n\nUndo: ";
    cout << "\n__________\n";

    S1.Undo();
    cout << "\nS1  after undo = " << S1.TEXT << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.TEXT << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.TEXT << "\n";

    cout << "\n\nRedo: ";
    cout << "\n__________\n";

    S1.Redo();
    cout << "\nS1  after Redo = " << S1.TEXT << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.TEXT << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.TEXT << "\n";



    system("pause>0");
    return 0;

};

