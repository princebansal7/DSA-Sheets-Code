#include<iostream>
using namespace std;

int main()
{

    /*
        5 5 5 5 5
        4 4 4 4 4
        3 3 3 3 3
        2 2 2 2 2
        1 1 1 1 1
    */

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << n - i + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}