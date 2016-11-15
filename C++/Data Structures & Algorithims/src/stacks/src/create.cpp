#include <iostream>
//#include <iomanip> for setw(int);

using namespace std;

void create_stack()
{
    int stack_size = 0;
    int top = 0;

    cout << "***************** Create a Stack ************************\n\n";
    cout << "Kindly define stack size: __\b\b";
    cin >> stack_size;

    int _stack[stack_size];

    if(!(stack_size<=0)){

        for (int c=0; ; c++){

            if (top < stack_size){//check for valid top

                cout << "Enter element " << c+1 << ">> __\b\b";
                cin >> _stack[c];

                top++;

            }else
            {
                //stack overflow
                break;
            }
        }

        cout << "\nHere is your Stack\n\n";

        for (int c=top; c>0; c--){
            cout << "\t\t\t+--+\n";
            cout << "\t\t\t|" << _stack[c-1] << "|\n";
        }

        cout << "\t\t\t+--+";

    }else
    {
        cout << "Invalid Stack size! Retry...\n\n";
        create_stack();
    }

}
