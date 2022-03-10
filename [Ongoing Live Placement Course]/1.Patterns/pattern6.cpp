#include<iostream>
using namespace std;

int main()
{
    /*
        1 2 3 4 5
        6 7 8 9 10
        11 12 13 14 15
        16 17 18 19 20
        21 22 23 24 25
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;

    /* -----WAY-1-----------

    int i = 1, count = 0;

    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << (++count) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // -----WAY-2-----------

    int count = 1, i = 1;

    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}