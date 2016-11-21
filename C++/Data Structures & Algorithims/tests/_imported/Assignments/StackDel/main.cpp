//P15/35280/2015
//Mbock Otienio Ernie
//Program to remove values from a stack

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<stack>

#define SIZE 20

int main(){
    int x, stkSize, usrInp;
    std::stack<int> stk;

    error1:
    std::cout << "Specify size of stack: ";
    std::cin >> stkSize;

    if(stkSize<=0){
        std::cout << "Invalid input\n";
        goto error1;
    }

    for(x=0; x<stkSize; x++)
        stk.push(rand() %100);

    std::cout << "The stack contains: \n";

    for(std::stack<int> dump = stk; !dump.empty(); dump.pop()){
        std::cout << "|------|\n";
        std::cout << "|" << std::setw(4) << dump.top() << std::setw(4) << "|\n";
        std::cout << "|------|\n";
    }

    error2:
    std::cout << "\nType in number of element(s) to remove: ";
    std::cin >> usrInp;

    if(usrInp<0 || usrInp>stkSize){
        std::cout << "Invalid input\n";
        goto error2;
    }else{
        for(x=0; x<usrInp; x++){
            stk.pop();
        }
    }

    std::cout << "Your new stack with (" << stk.size() << " elements) is:\n";

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