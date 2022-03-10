#include<iostream>
using namespace std;

int main()
{
    /*
        A B C D E
        B C D E F
        C D E F G
        D E F G H
        E F G H I
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;
    /*------ WAY-1----------------------------
    char ch = 'A';
    int i = 1;
    while (i <= n) {
        int j = 0;

        while (j < n) {

            cout << (char)(ch + j) << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }

    --------------------------------------------*/

    /*----------WAY-2-----------------------

    char ch = 'A';
    int i = 1;
    while (i <= n) {
        int j = 1;

        while (j <= n) {

            cout << (char)(ch + j - 1) << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    --------------------------------------*/

    /*-----------WAY-3-----------------------

    int i = 1;
    while (i <= n)
    {
    int j = 1;
    char ch = ('A' + i - j);
    while (j <= n)

    {

      cout << ch << " ";
      ch++;
      j++;
    }

    cout << endl;
    i++;
    }



    -----------------------------------------*/

    //-------WAY-4-------------------------

    int i = 1;
    while (i <= n) {
        int j = 1;

        while (j <= n) {

            /* we know:
            =>
                i+j-1 = 1

             => add 'A'-1 both sides (as we want 'A' in LHS)
             => Hence required:   'A'+ i + j - 2

            */
            cout << (char)('A' + i + j - 2) << " ";  // by simple math
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}