/**
 * DEREK PRINCE MUTENDE
 * P15/1724/2016
 * Created on 29th September 2016
 * Last Updated on 29th September 2016
**/

#include "elon.h"
#include <iostream>

#define ENQUEUE 101
#define DEQUEUE 102
#define SHOW_QUEUED 103
#define SIZE_OF_QUEUE 104

void _init_();
void _program_init();

Queue _queue;
int PC = 0;

void _program_init()
{
    cout << "*************** QUEUES *****************\n\n";

    cout <<"Below are a list of operations and their opcodes.\n"
         <<"Choose one to execute...\n\n";
}

int main()
{

    bool prog_status = false;

    if (PC==0){
        _program_init();
    }

    PC++;

    cout << " OPcode | Operation\n"
         << "--------+-------------\n"
         << " 101    | Enqueue Item (Integer)\n"
         << " 102    | Dequeue Item\n"
         << " 103    | Show Queued Items\n"
         << " 104    | Show Current Queue Size\n";

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
    int opcode, item;
    bool isRetry = false;

    cout << "\nEnter OPcode to Execute ___\b\b\b";
    cin >> opcode;

    cout << "\n\n";

    switch(opcode){
        case ENQUEUE:
            if (!_queue.isFull()){
                cout << "Enter item to enqueue: __\b\b";
                cin >> item;
                _queue.enqueue(item);
            }else{
                cout << "Queue is Full";
            }
        break;

        case DEQUEUE:
            if (!_queue.isEmpty()){
                cout<<"The item dequeued was : "<<_queue.dequeue();
            }else
            {
                cout << "Queue is Empty";
            }
        break;

        case SHOW_QUEUED:
            _queue.display();
        break;

        case SIZE_OF_QUEUE:
            cout << "The current size of the queue is: " << _queue._size();
        break;

        default:
            cout << "\nInvalid OPcode. Do you wish to retry? [1 for Yes AND 0 for No] _\b";
            cin >> isRetry;

            if(isRetry){
                _init_();
            }
    }
}
