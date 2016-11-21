//P15/35280/2015
//Mbock Otienio Ernie
//Program to insert a value to a linear list

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

    std::cout << "Your list is:\n";

    for(x=0; x<usrSize; x++){//generate list
        List[x] = rand() %100;
        std::cout << List[x] << "(" << x+1 << ")" << std::setw(4);
    }

    error2:
    std::cout << "\nType position to insert number: ";
    std::cin >> usrPos;

    if(usrPos<0 || usrPos>usrSize){//error check
        std::cout << "Invalid location";
        goto error2;
    }

    std::cout << "Type in number to insert: ";
    std::cin >> usrInp;

    for(x=(usrSize-1); (x+1)>=usrPos; x--){//shift values in list to right
        List[x+1] = List[x];
    }

    List[usrPos-1] = usrInp;//insert value in specified position

    for(x=0; x<=usrSize; x++){
        std::cout << List[x] << "(" << x+1 << ")" << std::setw(4);
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}