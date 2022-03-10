#include<iostream>
using namespace std;

int main()
{
    /*
        A
        B C
        D E F
        G H I J
        K L M N O
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;
    /* ----------WAY-1-----------------
    int i = 1;
    char ch = 'A';
    while (i <= n) {
        int j = 1;

        while (j <= i) {
            cout << (char)(ch) << " ";
            j++;
            ch++;
        }
        cout << endl;

        i++;
    }
    ----------------------------------*/

    /* --------------WAY-2------------------

    int i = 1;
    int value = 1;
    while (i <= n) {
        int j = 1;

        while (j <= i) {
            cout << (char)('A' + value - 1) << " ";
            j++;
            value++;
        }
        cout << endl;
        i++;
    }
    -----------------------------------------*/

    //----------------WAY-3-------------------

    int i = 1;
    char value = 'A';
    while (i <= n) {
        int j = 1;

        while (j <= i) {
            cout << value << " ";
            j++;
            value++;
        }
        cout << endl;
        i++;
    }
    return 0;
}