//P15/35280/2015
//Mbock Otieno Ernie
//Program to remove a value from a double-linked list

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

    int delVal(int chk, int garb){
        for(int x=1; x<=garb; x++){
            if(x==1)
                P = H;
            if((P->x)==chk){
                if(P==H){
                    H = P->RL;
                    H->LL = NULL;
                    P = NULL;
                    return 1;
                }else if(P->RL==NULL){
                    (P->LL)->RL = NULL;
                    P = NULL;
                    return 1;
                }else{
                    (P->LL)->RL = P->RL;
                    (P->RL)->LL = P->LL;
                    P = NULL;
                    return 1;
                }
            }else{
                P = P->RL;
                if(P==NULL){
                  std::cout << chk << " was not found";
                  return 0;
                }
            }
        }
        return 0;
    }


private:
    Node *H = NULL;
    Node *P;
};

int main(){

    doublLink list;

    int i, n, val, usrPos;

    error1:
    std::cout << "Specify size of double-linked list: ";
    std::cin >> n;

    if(n<1){
        std::cout << "Invalid input\n";
        goto error1;
    }

    for(i=1; i<=n; i++){
        val = rand() %100;
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

    error2:
    std::cout << "\nType number to delete from double-linked list: ";
    std::cin >> val;

    if((list.delVal( val, n))==0)
        return 0;

    std::cout << "\nYour new double-linked list is: \n";

    /*Output formatting*/
    for(i=1; i<=n-1; i++){
        if(i==1)
            std::cout << std::setw(14) << "    |---------|";
        else
            std::cout << std::setw(14) << " -->|---------|";
    }

    std::cout << "\nH ->";

    for(i=1; i<=n-1; i++){
        std::cout << "|" << std::setw(5) << list.readVal(i) << std::setw(5) << "|" << std:: setw(5);
    }

    std::cout << std::endl;

    for(i=1; i<=n-1; i++){
        if(i==1)
            std::cout << std::setw(14) << "    |---------|";
        else
            std::cout << std::setw(14) << " <--|---------|";
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}