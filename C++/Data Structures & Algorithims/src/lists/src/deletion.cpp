#include <iostream>

using namespace std;

void _search (int* keyPtr, int _list[], int* posPtr);
void print_list(int _list[], int* loop_controller);

void deletion_from_list()
{
    int n = 5;
    int _list[n] = {4,6,9,3,7};
    int pos=-1, x=0;
    bool isRetry = false;

    cout << "************* Delete an element from an existing List ********************\n\n";

    cout << "Below is a list of numbers.\n"
            "Which number would you like to delete?\n\n";

    print_list(_list, &n);
    cout << "___\b\b\b";

    cin >> x;

    _search(&x, _list, &pos);

    if (pos!=-1){

        n--;
        for (int c=pos; c<n; c++){
            _list[c] = _list[c+1];
        }

        cout << "\n\nDeletion complete...\n\nBelow is the new list\n\n";

        print_list(_list, &n);

    }else
    {
        cout << "\nSorry, number not found. Retry? [1 for Yes AND 0 for No] _\b";
        cin >> isRetry;

        if(isRetry){cout << "\n\n"; deletion_from_list();}
    }

}

void _search (int* keyPtr, int _list[], int* posPtr)
{
    for (unsigned int c=0; c<=sizeof(_list); c++){
        if (*keyPtr == _list[c]){
            *posPtr = c;
            break;
        }
    }
}

void print_list(int _list[], int* loop_controller)
{
    for (int c=0; c<*loop_controller; c++){
        cout << _list[c] << " ";
    }
}
