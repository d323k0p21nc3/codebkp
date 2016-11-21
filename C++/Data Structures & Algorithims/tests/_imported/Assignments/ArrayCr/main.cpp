//P15/35280/2015
//Mbock Otienio Ernie
//Program to generate an array

#include <iostream>
#include <stdlib.h>
#include <iomanip>

int main(){
    int usrSize, x;//initialize variables

    error1:
    std::cout << "Specify size of array: ";
    std::cin >> usrSize;

    if(usrSize<1){
        std::cout << "Invalid input\n";
        goto error1;
    }

    int Arr[usrSize];

    for(x=0; x<usrSize; x++){//generate array
        std::cout << "Input element " << x+1 << " : ";
        std::cin >>  Arr[x];
    }

    std::cout << "Your array is: \n";//output array
    for(x=0; x<usrSize; x++){
        std::cout << Arr[x] << std::setw(4);
    }

    std::cout << "\nPress any key to exit...";//prompt key press to exit
    std::cin.get();

    return 0;
}