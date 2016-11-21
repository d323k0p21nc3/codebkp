//P15/35280/2015
//Mbock Otienio Ernie
//Program to generate a list

#include <iostream>
#include <stdlib.h>
#include <iomanip>

int main(){
    int usrSize, usrPos, usrInp, x;//initialize variables

    error1:
    std::cout << "Specify the size of the list: ";//get list size
    std::cin >> usrSize;

    int List[usrSize];//initialize list to user-specified size

    if(usrSize<1){ //error check
        std::cout << "Invalid intput\n";
        goto error1;
    }

    for(x=0; x<usrSize; x++){//generate list
        std::cout << "Input element " << x+1 << " : ";
        std::cin >>  List[x];
    }

    std::cout << "Your list is:\n";

    for(x=0; x<usrSize; x++){
        std::cout << List[x] << "(" << x+1 << ")" << std::setw(4);
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}