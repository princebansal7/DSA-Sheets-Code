#include<iostream>
using namespace std;

int main()
{
    /*
        * * * * *
        * * * *
        * * *
        * *
        *
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;

    /*---------------WAY-1----------------
        int i = 1;
        while (i <= n) {

            int j = n;
            while (j >= i) {
                cout << "*" << " ";
                j--;
            }

            cout << endl;
            i++;
        }
    --------------------------------------*/

// ----------WAY-2------------------------

    int i = 1;
    while (i <= n) {

        int j = 1;
        int star = n - i + 1;
        while (j <= star) {
            cout << "*" << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}