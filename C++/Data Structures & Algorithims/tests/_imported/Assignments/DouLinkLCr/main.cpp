//P15/35280/2015
//Mbock Otieno Ernie
//Program to generate a double-linked list

#include<iostream>
#include<iomanip>
#include<stdlib.h>

class doublLink{
    struct Node{
        Node *LL;
        int x;
        Node *RL;
    };

public:
    void addVal(int usrVal, int pos, int garb){
        Node *Q = new Node();
        Q->x = usrVal;
        if(pos==1){
            H = Q;
            H->LL = NULL;
        }else{
            P->RL = Q;//set previous' node RL field to current node
            Q->LL = P;
            (Q->LL)->RL = Q;//set previous' node RL field to current node(case of node 2)
        }
        P = Q;

        if(pos==garb){
            P->RL = NULL;
            Q = NULL;
            P = NULL;
        }
    }

    int readVal(int pos){
        int outp;
        Node *Q;
        if (pos==1){
            Q = H;
            P = H->RL;
        }else
        Q = P;

        outp = Q->x;
        P = Q->RL;

        return outp;
    }

private:
    Node *H = NULL;
    Node *P;
};

int main(){

    doublLink list;

    int i, n, val;

    error1:
    std::cout << "Specify size of double-linked list: ";
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

    std::cout << "\nYour double-linked list is: \n";

    /*Output formatting*/
    for(i=1; i<=n; i++){
        if(i==1)
            std::cout << std::setw(14) << "    |---------|";
        else
            std::cout << std::setw(14) << " -->|---------|";
    }

    std::cout << "\nH ->";

    for(i=1; i<=n; i++){
        std::cout << "|" << std::setw(5) << list.readVal(i) << std::setw(5) << "|" << std:: setw(5);
    }

    std::cout << std::endl;

    for(i=1; i<=n; i++){
        if(i==1)
            std::cout << std::setw(14) << "    |---------|";
        else
            std::cout << std::setw(14) << " <--|---------|";
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}