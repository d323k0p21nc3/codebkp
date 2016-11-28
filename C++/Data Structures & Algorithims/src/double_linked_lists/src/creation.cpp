#include "elon.h"

DoubleLinkedList createDoubleLinkedList()
{
    DoubleLinkedList double_linked_list;
    int _size,data;

    cout << "***************** Create a Double Linked List ************************\n\n";
    cout << "Kindly define Double Linked list size: __\b\b";
    cin >> _size;

    if(_size>0){
        double_linked_list.setSize(&_size);

        cout << "\n";

        for (int c=0; c<_size; c++){
            cout << "Enter data for node " << c+1 << ": __\b\b";
            cin >> data;

            double_linked_list.setData(&data);

            double_linked_list.createNode();

            if (c==0){
                double_linked_list.head = double_linked_list.nodePtr;
                double_linked_list.head->link_prev = NULL;

            }else
            {
                double_linked_list.tempPtr->link_next = double_linked_list.nodePtr;
                double_linked_list.nodePtr->link_prev = double_linked_list.tempPtr;
            }

            double_linked_list.tempPtr = double_linked_list.nodePtr;

            if(c==(_size-1)){double_linked_list.nodePtr->link_next = NULL;}
        }

        cout << "\n";

        double_linked_list.printList();

    }else
    {
       cout << "Invalid list size. Retry...\n\n\n\n";
        createDoubleLinkedList();
    }

    return double_linked_list;
}
