#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    /*

    i  =  rows
    j  =  columns

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

    */

    int n; cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}