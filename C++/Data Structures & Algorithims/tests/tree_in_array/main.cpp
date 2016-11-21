#include <iostream>
#include <math.h>

using namespace std;

void create_tree(int* n);

int main()
{
    int n;

    cout << "Provide Depth of Tree: _\b";
    cin >> n;

    n=n+1;

    cout << "\n\n";

    create_tree(&n);

    return 0;
}

void create_tree(int* nPtr)
{
    int tree_arr[((int)pow(2,*nPtr)-1)] = {0};
    int prevC = 2;
    int depthCounter = 3;

    cout << "********************* Depth 1 *************************\n\n";
    cout << "Enter value of ROOT Node: _\b";
    cin >> tree_arr[1];
    cout << "\n********************* End of Depth ********************\n\n\n\n";

    if(*nPtr>2){
        for (int c=1;; c++){

            if(c==1){
                cout << "********************* Depth 2 *************************\n\n";
            }else
            {
                if((2*c)==(2*prevC)){
                    if(*nPtr==depthCounter){
                        break;
                    }
                    prevC = 2*prevC;
                    cout << "********************* Depth " << depthCounter << " *************************\n\n";
                    depthCounter++;
                }
            }

            cout << "Enter value of Left Child Node of Parent [" << tree_arr[c] << "]  -> _\b";
            cin >> tree_arr[2*c];

            cout << "Enter value of Right Child Node of Parent [" << tree_arr[c] << "] -> _\b";
            cin >> tree_arr[(2*c)+1];

            if(c==(prevC-1)){
                cout << "\n********************* End of Depth ********************\n\n\n\n";
            }
        }
    }
}
