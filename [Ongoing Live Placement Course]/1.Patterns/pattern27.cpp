#include<iostream>
using namespace std;

int main()
{
    /*
            1
           121
          12321
         1234321
        123454321
    */

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;

    int i = 1;
    while (i <= n) {

// PRINTING space triangle

        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }

// PRINTING 2nd triangle

        int j = 1;
        while (j <= i) {
            cout << j;
            j++;
        }
// PRINTING 3rd triangle (** IMP)

        int start = i - 1;
        while (start) {
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }

    return 0;
}