#include "elon.h"

void insertIntoDoubleLinkedList(DoubleLinkedList* double_linked_list)
{
    int key,data;
    bool insertBefore = false;

    if(double_linked_list->exists()){

        cout << "***************** Insert Into a Double Linked List ************************\n\n";
        cout << "Kindly define the data of the node where to insert: __\b\b";
        cin >> key;

        cout << "Do you want to insert before (1) or after (0)? _\b";
        cin >> insertBefore;

        cout << "\n";

        if(double_linked_list->_search(&key)){

            double_linked_list->increase_size();

            cout << "Kindly enter the data for the node to insert: __\b\b";
            cin >> data;

            double_linked_list->setData(&data);

            double_linked_list->createNode();

            if(insertBefore){

                if(!double_linked_list->loopCount){
                    double_linked_list->head = double_linked_list->nodePtr;
                    double_linked_list->nodePtr->link_prev = NULL;
                    double_linked_list->nodePtr->link_next = double_linked_list->s_nodePtr;
                    double_linked_list->s_nodePtr->link_prev = double_linked_list->nodePtr;
                }else
                {
                    double_linked_list->s_nodePtr->link_prev->link_next = double_linked_list->nodePtr;
                    double_linked_list->nodePtr->link_next = double_linked_list->s_nodePtr;
                    double_linked_list->nodePtr->link_prev = double_linked_list->s_nodePtr->link_prev;
                    double_linked_list->s_nodePtr->link_prev = double_linked_list->nodePtr;
                }

            }else
            {
                if(double_linked_list->loopCount == double_linked_list->_size-2){
                    double_linked_list->s_nodePtr->link_next = double_linked_list->nodePtr;
                    double_linked_list->nodePtr->link_prev = double_linked_list->s_nodePtr;
                    double_linked_list->nodePtr->link_next = NULL;
                }else
                {
                    double_linked_list->nodePtr->link_next = double_linked_list->s_nodePtr->link_next;
                    double_linked_list->nodePtr->link_prev = double_linked_list->s_nodePtr;
                    double_linked_list->s_nodePtr->link_next->link_prev = double_linked_list->nodePtr;
                    double_linked_list->s_nodePtr->link_next = double_linked_list->nodePtr;
                }
            }

            double_linked_list->collectGarabage();

            cout << "\n\nBelow is the updated linked list\n";
            double_linked_list->printList();

        }else
        {
            cout << "The Node with the data specified was not found. Retry..\n\n\n\n";
            insertIntoDoubleLinkedList(double_linked_list);
        }

    }else
    {
        cout << "You have to create a double linked list first!\n";
    }
}
