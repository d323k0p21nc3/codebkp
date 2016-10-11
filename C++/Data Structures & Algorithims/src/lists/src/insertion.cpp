#include <iostream>

using namespace std;

void insert_into_list()
{
    int n = 5;
    int _list[n] = {4,6,9,3,7};
    int pos, x;

    cout << "************* Insert an element into an existing List ********************\n\n";

    cout << "Below is a list of numbers.\n"
            "At Which position would you like to insert a new number?\n"
            "NB* The Position of each element is in [] square brackets.\n\n";

    for (int c=0; c<n; c++){
        cout << _list[c] << "->[" << c+1 << "] _\b";
    }

    cin >> pos;

    cout << "\nProvide number to insert: ______\b\b\b\b\b\b";
    cin >> x;

    cout << "\nInserting at position " << pos << "...";

    pos--;
    n++;

    for (int c=n-1; c>=pos; c--){
        _list[c+1] = _list[c];
    }

    _list[pos] = x;

    cout << "\n\nInsertion complete...\n\nBelow is the new list\n\n";

    for (int c=0; c<n; c++){
        cout << _list[c] << " ";
    }
}
