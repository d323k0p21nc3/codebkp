//P15/35280/2015
//Mbock Otienio Ernie
//Program to remove a value from a queue

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <queue>

int main(){

    int x, usrInp, usrSize;
    std::queue<int> Que;

    error1:
    std::cout << "Type in size of queue: ";
    std::cin >> usrSize;

    if(usrSize<1){ //error check
        std::cout << "Invalid intput\n";
        goto error1;
    }

    for(x=0; x<usrSize; x++){
        Que.push(rand() %100);
    }

    std::cout << "The queue contains: \n";

    for(std::queue<int> dump = Que; !dump.empty(); dump.pop()){
        std::cout << "|--------|\n";
        std::cout << "|" << std::setw(5) << dump.front() << std::setw(5) << "|\n";
        std::cout << "|--------|\n";
    }

    error2:
    std::cout << "\nType in number of element(s) to remove: ";
    std::cin >> usrInp;

    if(usrInp<0 || usrInp>usrSize){
        std::cout << "Invalid input\n";
        goto error2;
    }else{
        for(x=0; x<usrInp; x++){
            Que.pop();
        }
    }

    std::cout << "Your new queue with " << Que.size() << " elements is: \n";

    while(!Que.empty()){
        std::cout << "|--------|\n";
        std::cout << "|" << std::setw(5) << Que.front() << std::setw(5) << "|\n";
        std::cout << "|--------|\n";
        Que.pop();
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}