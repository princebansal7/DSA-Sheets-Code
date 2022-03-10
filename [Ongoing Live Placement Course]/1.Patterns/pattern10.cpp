#include<iostream>
using namespace std;

int main()
{
    /*
        1
        2 3
        3 4 5
        4 5 6 7
        5 6 7 8 9
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;

    /* ------WAY-1--------------

    int i = 1;
    while (i <= n) {
        int j = 0;
        while (j < i) {
            cout << i + j << " ";

            j++;
        }
        cout << endl;
        i++;
    }
    --------------------------*/


    /* ------WAY-2-------------

    int i = 1;
    while (i <= n) {
        int j = 1;
        int value = i;
        while (j <= i) {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    --------------------------*/

    //----------WAY-3----------

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}