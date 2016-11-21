#include "elon.h"

LinkedList createLinkedList()
{
    LinkedList linked_list;
    int _size,data;

    cout << "***************** Create a Linked List ************************\n\n";
    cout << "Kindly define Linked list size: __\b\b";
    cin >> _size;

    if(_size>0){
        linked_list.setSize(&_size);

        cout << "\n";

        for (int c=0; c<_size; c++){
            cout << "Enter data for node " << c+1 << ": __\b\b";
            cin >> data;

            linked_list.setData(&data);

            linked_list.createNode();

            if (c==0){
                linked_list.head = linked_list.nodePtr;
                linked_list.tempPtr = linked_list.nodePtr;
            }else
            {
                linked_list.tempPtr->link = linked_list.nodePtr;
                linked_list.tempPtr = linked_list.nodePtr;
            }

            linked_list.nodePtr->link = NULL;
        }

        cout << "\n";

        linked_list.printList();

    }else
    {
       cout << "Invalid list size. Retry...\n\n\n\n";
        createLinkedList();
    }

    return linked_list;
}
