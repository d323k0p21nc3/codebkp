//P15/35280/2015
//Mbock Otienio Ernie
//Program to generate a stack

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<stack>

#define SIZE 20

int main(){
    int x, stkSize, usrInp;
    std::stack<int> stk;

    error1:
    std::cout << "Specify size of stack (max size 20): ";
    std::cin >> stkSize;

    if(stkSize<1){
        std::cout << "Invalid input\n";
        goto error1;
    }

    for(x=0; x<stkSize; x++){
        std::cout << "Input element : ";
        std::cin >>  usrInp;
        stk.push(usrInp);
    }

    std::cout << "The stack contains: \n";

    while(!stk.empty()){
        std::cout << "|------|\n";
        std::cout << "|" << std::setw(4) << stk.top() << std::setw(4) << "|\n";
        std::cout << "|------|\n";
        stk.pop();
     }

     std::cout << "\nPress any key to exit...";
     std::cin.get();

     return 0;
}