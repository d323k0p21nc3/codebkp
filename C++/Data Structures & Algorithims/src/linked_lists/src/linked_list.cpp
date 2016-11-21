#include<iostream>

using namespace std;

class LinkedList
{
    private:
        struct Node {
            int data;
            Node* link;
        };

        int _size,data;


    public:
        Node* head = NULL;
        Node* nodePtr = NULL;
        Node* tempPtr = NULL;
        Node* s_nodePtr = NULL;

        LinkedList()
        {
            _size = 0;
            data = 0;
        }

        void setSize(int* sizePtr)
        {
            _size = *sizePtr;
        }

        void increase_size()
        {
            _size++;
        }

        void decrease_size()
        {
            _size--;
        }

        void setData(int* dataPtr)
        {
            data = *dataPtr;
        }

        bool exists()
        {
            if (head!=NULL)
            {
                return true;
            }else
            {
                return false;
            }
        }

        void createNode()
        {
            nodePtr = new Node;
            nodePtr->data = data;
        }

        void printList()
        {
            this->collectGarabage();

            nodePtr = head;

            cout << "+-------------------------------------------------------------------------------+\n";
            cout << "|                     Head Pointer Value = " << head << "                             |\n";
            cout << "+-------------------------------------------------------------------------------+\n";
            cout << "| Node | Value in Data Section | Value in Link Section | Actual Address of Node |\n";
            cout << "+======+=======================+=======================+========================+\n";

            //nodePtr = nodePtr->link;

            for (int c=0; c<_size; c++){

                if (c==_size-1){
                    cout << "|  " << c+1 << "   |          " << nodePtr->data << "           |         NULL          |        " << nodePtr << "        |\n";
                    cout << "+------+-----------------------+-----------------------+------------------------+\n";
                }else{
                    cout << "|  " << c+1 << "   |          " << nodePtr->data << "           |       " << nodePtr->link << "        |        " << nodePtr << "        |\n";
                    cout << "+------+-----------------------+-----------------------+------------------------+\n";
                }

                nodePtr = nodePtr->link;
            }

        }

        void collectGarabage()
        {
            nodePtr = NULL;
            tempPtr = NULL;
            s_nodePtr = NULL;
        }

        bool _search(int* keyPtr)
        {
            bool found = false;

            s_nodePtr = head;

            while(s_nodePtr!=NULL){
                if(s_nodePtr->data == *keyPtr){
                    found = true;
                    break;
                }
                tempPtr = s_nodePtr;
                s_nodePtr = s_nodePtr->link;
            }
            return found;
        }
};
