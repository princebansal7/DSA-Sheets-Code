#include<iostream>
using namespace std;

int main()
{
    /*
        A
        B C
        C D E
        D E F G
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

        while (j < i) {

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

        while (j <= i) {

            cout << (char)(ch + j - 1) << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    --------------------------------------*/

    //-------WAY-3-------------------------

    int i = 1;
    while (i <= n) {
        int j = 1;

        while (j <= i) {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}