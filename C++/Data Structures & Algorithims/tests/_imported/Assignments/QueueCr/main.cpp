//P15/35280/2015
//Mbock Otienio Ernie
//Program to generate a queue

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
        std::cout << "Input element " << x+1 << " : ";
        std::cin >> usrInp;
        Que.push(usrInp);
    }

    std::cout << "The queue contains: \n";

    for(x=0; !Que.empty(); x++){
        std::cout << "|--------|\n";
        std::cout << "|" << std::setw(5) << Que.front() << std::setw(5) << "|\n";
        std::cout << "|--------|\n";
        Que.pop();
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}