#include "elon.h"

void deleteFromDoubleLinkedList(DoubleLinkedList* double_linked_list)
{
    int key;

    if(double_linked_list->exists()){

        cout << "***************** Delete From a Double Linked List ************************\n\n";
        cout << "Kindly define the data of the node to delete: __\b\b";
        cin >> key;


        cout << "\n";

        if(double_linked_list->_search(&key)){

            double_linked_list->decrease_size();

            if(!double_linked_list->loopCount){
                double_linked_list->head = double_linked_list->s_nodePtr->link_next;
                double_linked_list->s_nodePtr->link_prev = NULL;
            }else
            {
                if(double_linked_list->loopCount == double_linked_list->_size-2){
                    double_linked_list->s_nodePtr->link_next = NULL;
                }else
                {
                    double_linked_list->s_nodePtr->link_prev->link_next = double_linked_list->s_nodePtr->link_next;
                    double_linked_list->s_nodePtr->link_next->link_prev = double_linked_list->s_nodePtr->link_prev;
                }
            }

            double_linked_list->collectGarabage();

            cout << "\n\nBelow is the updated linked list\n";
            double_linked_list->printList();

        }else
        {
            cout << "The Node with the data specified was not found. Retry..\n\n\n\n";
            deleteFromDoubleLinkedList(double_linked_list);
        }

    }else
    {
        cout << "You have to create a double linked list first!\n";
    }
}
