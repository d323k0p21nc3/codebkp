#include "elon.h"
#include <iostream>
#include <windows.h>

using namespace std;

void pop_from_stack()
{
    int stack_size = 10, top = 10, x = 0, posFound = 0;
    int _stack[stack_size] = {12,45,98,34,98,44,76,57,86,69};
    bool exists = false;

    cout << "***************** Pop from a Stack ************************\n\n";

    cout << "\nHere are the element in your stack\n\n";
    _print(&top, _stack);

    cout << "\n\nKindly provide the number to pop from the stack: __\b\b";
    cin >> x;

    cout << "\nHere is your Stack before the Pop\n\n";
    _print(&top, _stack);

    _search(&x, &stack_size, _stack, &posFound, &exists);

    if(exists){

        stack_size--;
        top--;
        for (int c=posFound; c<stack_size; c++){
            _stack[c] = _stack[c+1];
        }

        cout << "\n\nHere is updated Stack\n\n";
        _print(&top, _stack);

    }else
    {
        cout << "\n\nSorry the element you gave me does not exist. Retry...\n\n";
        system("pause");
        cout << "\n\n\n\n";
        pop_from_stack();
    }
}
