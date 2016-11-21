#include "elon.h"
#include <iostream>

using namespace std;

void push_into_stack()
{
    int stack_size = 10;
    int top = 10;
    int _stack[stack_size] = {12,45,98,34,98,44,76,57,86,69};
    int x = 0;

    cout << "***************** Push into a Stack ************************\n\n";

    cout << "Kindly provide the number to push onto the list: __\b\b";
    cin >> x;

    if(!(top>stack_size)){

        cout << "\nHere is your Stack before the Push\n\n";

        _print(&stack_size, _stack);

        stack_size++;
        _stack[top] = x;

        cout << "\n\nHere is updated Stack\n\n";

        _print(&stack_size, _stack);

    }else
    {
        cout << "Stack Full. Risk of Overflow!\n";
    }
}
