#include "elon.h"

void deleteFromLinkedList(LinkedList* linked_list)
{
    int key;

    if(linked_list->exists()){

        cout << "***************** Delete From a Linked List ************************\n\n";
        cout << "Kindly define the data of the node to delete: __\b\b";
        cin >> key;


        cout << "\n";

        if(linked_list->_search(&key)){

            linked_list->decrease_size();

            linked_list->tempPtr->link = linked_list->s_nodePtr->link;
            linked_list->collectGarabage();

            cout << "\n\nBelow is the updated linked list\n";
            linked_list->printList();

        }else
        {
            cout << "The Node with the data specified was not found. Retry..\n\n\n\n";
            deleteFromLinkedList(linked_list);
        }

    }else
    {
        cout << "You have to create a linked list first!\n";
    }
}
