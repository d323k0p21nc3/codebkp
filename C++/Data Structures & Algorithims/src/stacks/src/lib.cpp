#include <iostream>

using namespace std;


void _search (int* keyPtr, int* stack_size, int _stack[], int* posPtr, bool* exists)
{
    for (int c=*stack_size; c>=0; c--){
        if (*keyPtr == _stack[c]){
            *posPtr = c;
            *exists = true;
            break;
        }
    }
}

void _print(int* top, int _stack[])
{
    for (int c=*top; c>0; c--){
            cout << "\t\t\t+--+\n";
            cout << "\t\t\t|" << _stack[c-1] << "|\n";
        }

        cout << "\t\t\t+--+";
}
