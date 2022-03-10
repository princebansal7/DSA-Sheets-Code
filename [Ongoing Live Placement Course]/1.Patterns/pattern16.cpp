#include<iostream>
using namespace std;

int main()
{
    /*
        A
        B B
        C C C
        D D D D
        E E E E E
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;
    /*----------WAY-1-----------------
    int i = 1;
    char ch = 'A';
    while (i <= n) {
        int j = 1;

        while (j <= i) {
            cout << (char)(ch) << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    ----------------------------------*/

    // --------------WAY-2------------------

    int i = 1;
    while (i <= n) {
        int j = 1;

        while (j <= i) {
            cout << (char)('A' + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}