//P15/35280/2015
//Mbock Otienio Ernie
//Program to add a value to an array

#include <iostream>
#include <stdlib.h>
#include <iomanip>

int main(){
    int usrSize, usrPos, usrInp,  x;//initialize variables

    error1:
    std::cout << "Specify size of array: ";
    std::cin >> usrSize;

    if(usrSize<1){
        std::cout << "Invalid input\n";
        goto error1;
    }

    int Arr[usrSize];

    std::cout << "Your array is: \n";
    for(x=0; x<usrSize; x++){//generate array
        Arr[x] = rand()%100;
        std::cout << Arr[x] << "(" << x+1 << ")" << std::setw(4);
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

    for(x=(usrSize-1); (x+1)>=usrPos; x--){//shift values in array to right
        Arr[x+1] = Arr[x];
    }

    Arr[usrPos-1] = usrInp;//insert value in specified position

    std::cout << "Your new array is: \n";

    for(x=0; x<=usrSize; x++){
        std::cout << Arr[x] << "(" << x+1 << ")" << std::setw(4);
    }


    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}