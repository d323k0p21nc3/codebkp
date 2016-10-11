/**
 * DEREK PRINCE MUTENDE
 * P15/1724/2016
 * Created on 20th September 2016
 * Last Updated on 25th September 2016
**/

#include <iostream>
#include "elon.h"

#define CREATE 101
#define INSERT 102
#define DELETE 103

using namespace std;

void _init_();

int main()
{

    bool prog_status = false;

    cout << "*************** LISTS *****************\n\n";

    cout <<"Below are a list of operations and their opcodes.\n"
         <<"Choose one to execute...\n\n";

    cout << " OPcode | Operation\n"
         << "--------+-------------\n"
         << " 101    | Create a List\n"
         << " 102    | Insert an element into an existing List\n"
         << " 103    | Delete an element from an existing List\n";

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
        create_list();

    }else if (opcode==INSERT)
    {
        cout << "\n\n";
        insert_into_list();

    }else if (opcode==DELETE)
    {
        cout << "\n\n";
        deletion_from_list();

    }else
    {
        cout << "\nInvalid OPcode. Do you wish to retry? [1 for Yes AND 0 for No] _\b";
        cin >> isRetry;

        if(isRetry){
            _init_();
        }
    }

}
