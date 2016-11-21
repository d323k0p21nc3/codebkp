//P15/35280/2015
//Mbock Otieno Ernie
//Program to generate a linked list

#include<iostream>
#include<stdlib.h>
#include<iomanip>

class LinkedList{//generate LinkedList "object"
    struct Node{//define LinkedList
        int x;
        Node *next;
    };

public:
    void addVal(int usrVal, int pos, int garb){//insert values to linked list
        Node *Q = new Node();//create new Node "object"
        Q->x = usrVal;
        if(pos==1)
            H = Q;//output confirming that head is set
        else
            P->next = Q;

        P = Q;

        if(pos==garb){//garbage collection
            Q = NULL;
            P = NULL;
        }
    }

    int readVal(int pos){
        int outp;
        Node *Q;
        if (pos==1){
            Q = H;
            P = H->next;
        }else
            Q = P;

        outp = Q->x;
        P = Q->next;

        return outp;
    }

private:
    Node *H = NULL;//initialise head to NULL
    Node *P;//[prev]trailing pointer (like temp)
};

int main(){
    LinkedList list;

    int i, n, val;

    error1:
    std::cout << "Specify size of list: ";
    std::cin >> n;

    if(n<1){
        std::cout << "Invalid input\n";
        goto error1;
    }

    for(i=1; i<=n; i++){
        std::cout << "\nInput number in position " << i << ": ";
        std::cin >> val;
        list.addVal(val, i, n);
    }

    std::cout << "\nYour linked list is: \n";

    /*Output formatting*/
    for(i=1; i<=n; i++){
        std::cout << std::setw(14) << "----------";
    }

    std::cout << "\nH";

    for(i=1; i<=n; i++){
        std::cout << " ->|" << std::setw(5) << list.readVal(i) << std::setw(5) << "|";
    }

    std::cout << std::endl;

    for(i=1; i<=n; i++){
        std::cout << std::setw(14) << "----------";
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}