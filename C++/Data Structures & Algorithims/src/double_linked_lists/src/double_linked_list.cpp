#include<iostream>

using namespace std;

class DoubleLinkedList
{
    private:
        struct Node {
            Node* link_prev;
            int data;
            Node* link_next;
        };

        int data;


    public:
        Node* head = NULL;
        Node* nodePtr = NULL;
        Node* tempPtr = NULL;
        Node* s_nodePtr = NULL;
        int _size, loopCount;

        DoubleLinkedList()
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

            cout << "+----------------------------------------------------------------------------------------------------------+\n";
            cout << "|                               Head Pointer Value = " << head << "                                              |\n";
            cout << "+----------------------------------------------------------------------------------------------------------+\n";
            cout << "| Node | Link to Previous Node  |   Contents of Node     |   Link to Next Node    | Actual Address of Node |\n";
            cout << "+======+========================+========================+========================+========================+\n";

            for (int c=0; c<_size; c++){

                if(c==0){
                    cout << "|  " << c+1 << "   |           " << nodePtr->link_prev << "            |           " << nodePtr->data << "           |        " << nodePtr->link_next << "        |        " << nodePtr << "        |\n";
                    cout << "+------+------------------------+------------------------+------------------------+------------------------+\n";
                }else
                {
                    if (c==_size-1){
                        cout << "|  " << c+1 << "   |        " << nodePtr->link_prev << "        |           " << nodePtr->data << "           |           " << nodePtr->link_next << "            |        " << nodePtr << "        |\n";
                        cout << "+------+------------------------+------------------------+------------------------+------------------------+\n";
                    }else{
                        cout << "|  " << c+1 << "   |        " << nodePtr->link_prev << "        |           " << nodePtr->data << "           |        " << nodePtr->link_next << "        |        " << nodePtr << "        |\n";
                        cout << "+------+------------------------+------------------------+------------------------+------------------------+\n";
                    }
                }

                nodePtr = nodePtr->link_next;
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
            loopCount = 0;

            s_nodePtr = head;

            while(s_nodePtr!=NULL){
                if(s_nodePtr->data == *keyPtr){
                    found = true;
                    break;
                }
                s_nodePtr = s_nodePtr->link_next;
                loopCount++;
            }
            return found;
        }
};
