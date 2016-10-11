#include <iostream>

using namespace std;

void create_list()
{
    int n = 0;

    cout << "***************** Create a List ************************\n\n";

    if(n<=0){ //check if list exists
        cout << "Enter size of list _\b";
        cin >> n;

        if (!(n<=0)){// check for valid n
            int _list[n];

            cout << "\nKindly populate the new list..\n\n";

            for (int c=0; c<n; c++){
                cout << "Enter element " << c+1 << " >> _\b";
                cin >> _list[c];
            }

            cout << "\nHere is your list...\n\n";

            for (int c=0; c<n; c++){
                cout << _list[c]
                     << " ";
            }

        }else
        {
            cout << "Invalid input. Retry...";
            create_list();
        }
    }else
    {
        cout << "List Exists.";
    }
}
