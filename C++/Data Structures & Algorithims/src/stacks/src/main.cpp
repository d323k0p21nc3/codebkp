/**
 * DEREK PRINCE MUTENDE
 * P15/1724/2016
 * Created on 29th September 2016
 * Last Updated on 29th September 2016
**/

#include "elon.h"
#include <iostream>

#define CREATE 101
#define PUSH 102
#define POP 103

using namespace std;

void _init_();

int main()
{

    bool prog_status = false;

    cout << "*************** STACKS *****************\n\n";

    cout <<"Below are a list of operations and their opcodes.\n"
         <<"Choose one to execute...\n\n";

    cout << " OPcode | Operation\n"
         << "--------+-------------\n"
         << " 101    | Create a Stack\n"
         << " 102    | Push an element into an existing Stack\n"
         << " 103    | Pop an element from an existing Stack\n";

    _init_();

    cout << "\n\nDo you wish to continue the program? [1 for Yes AND 0 for No] _\b";
    cin >> prog_status;

    if (prog_status){
        cout << "\n\n";
        main();
    }else
    {
        cout << "\n\n***************** Bye! ************************\n";
    }

    return 0;
}

void _init_()
{
    int opcode = 0;
    bool isRetry = false;

    cout << "\nEnter OPcode to Execute ___\b\b\b";
    cin >> opcode;

    if(opcode==CREATE){
        cout << "\n\n";
        create_stack();

    }else if (opcode==PUSH)
    {
        cout << "\n\n";
        push_into_stack();

    }else if (opcode==POP)
    {
        cout << "\n\n";
        pop_from_stack();

    }else
    {
        cout << "\nInvalid OPcode. Do you wish to retry? [1 for Yes AND 0 for No] _\b";
        cin >> isRetry;

        if(isRetry){
            _init_();
        }
    }

}
