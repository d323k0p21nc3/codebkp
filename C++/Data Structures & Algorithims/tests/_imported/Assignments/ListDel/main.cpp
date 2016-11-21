//P15/35280/2015
//Mbock Otienio Ernie
//Program to remove a value from a linear list

#include <iostream>
#include <stdlib.h>
#include <iomanip>

int main(){
    int usrSize, usrPos, x;//initialize variables

    error1:
    std::cout << "Specify the size of the list: ";//get list size
    std::cin >> usrSize;

    if(usrSize<1){ //error check
        std::cout << "Invalid intput\n";
        goto error1;
    }

    int List[usrSize];//initialize list to user-specified size

    std::cout << "Your list is:\n";

    for(x=0; x<usrSize; x++){//generate list
        List[x] = rand() %100;
        std::cout << List[x] << "(" << x+1 << ")" << std::setw(4);
    }

    error2:
    std::cout << "\nType position to delete number: ";
    std::cin >> usrPos;

    if(usrPos<0 || usrPos>usrSize){//error check
        std::cout << "Invalid location";
        goto error2;
    }

    for(x=(usrPos-1); x<usrSize; x++){//shift values in list to left
        List[x] = List[x+1];
    }

    std::cout << "Your new list is: \n";

    for(x=0; x<(usrSize-1); x++){
        std::cout << List[x] << "(" << x+1 << ")" << std::setw(4);
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}