#include "elon.h"

void insertIntoLinkedList(LinkedList* linked_list)
{
    int key,data;

    if(linked_list->exists()){

        cout << "***************** Insert Into a Linked List ************************\n\n";
        cout << "Kindly define the data of the node to insert after: __\b\b";
        cin >> key;


        cout << "\n";

        if(linked_list->_search(&key)){

            linked_list->increase_size();

            cout << "Kindly enter the data for the node to insert: __\b\b";
            cin >> data;

            linked_list->setData(&data);

            linked_list->createNode();

            linked_list->nodePtr->link = linked_list->s_nodePtr->link;
            linked_list->s_nodePtr->link = linked_list->nodePtr;
            linked_list->collectGarabage();

            cout << "\n\nBelow is the updated linked list\n";
            linked_list->printList();

        }else
        {
            cout << "The Node with the data specified was not found. Retry..\n\n\n\n";
            insertIntoLinkedList(linked_list);
        }

    }else
    {
        cout << "You have to create a linked list first!\n";
    }
}
