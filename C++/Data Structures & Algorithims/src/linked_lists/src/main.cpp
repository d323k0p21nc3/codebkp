/**
 * DEREK PRINCE MUTENDE
 * P15/1724/2016
 * Created on 29th September 2016
 * Last Updated on 29th September 2016
**/

#include <iostream>
#include "elon.h"

#define CREATE 101
#define INSERT 102
#define DELETE 103
#define SHOW_LIST 104

using namespace std;

void _init_();

LinkedList linked_list;
int PC = 0;
//std::auto_ptr<LinkedList> linked_list(new LinkedList);

int main()
{
    bool prog_status = false;

    if(PC==0){
        cout << "*************** Linked Lists *****************\n\n";

        cout <<"Below are a list of operations and their opcodes.\n"
             <<"Choose one to execute...\n\n";
    }

    cout << " OPcode | Operation\n"
         << "--------+-------------\n"
         << " 101    | Create a Linked List\n"
         << " 102    | Insert an element into an existing Linked List (Insertion done after specified Node)\n"
         << " 103    | Delete an element from an existing Linked List\n"
         << " 104    | Show Existing Linked List\n";
         if(PC==0){
            cout << "\n Disclaimer!\n You must create a Linked List before performing any other operations.\n";
            PC++;
         }

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
        linked_list = createLinkedList();

    }else if (opcode==INSERT)
    {
        cout << "\n\n";
        insertIntoLinkedList(&linked_list);

    }else if (opcode==DELETE)
    {
        cout << "\n\n";
        deleteFromLinkedList(&linked_list);

    }else if (opcode==SHOW_LIST)
    {
        cout << "\n\n";
        if(linked_list.exists()){
            linked_list.printList();
        }else
        {
            cout << "You have to create a linked list first!\n";
        }

    }else
    {
        cout << "\nInvalid OPcode. Do you wish to retry? [1 for Yes AND 0 for No] _\b";
        cin >> isRetry;

        if(isRetry){
            _init_();
        }
    }
}
