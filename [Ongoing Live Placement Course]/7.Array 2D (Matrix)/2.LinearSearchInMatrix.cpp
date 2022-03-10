#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

const int R = 3;
const int C = 4;

void print(int a[][C]) {
    for (int row = 0 ; row <  R; row++) {
        for (int col = 0; col < C; col++)
            cout << a[row][col] << " ";
        cout << nl;
    }
    cout << nl;
}
//_______TC: O(row*col)_________________________

bool LinearSearch(int a[][C], int target) {

    for (int row = 0 ; row <  R; row++)
        for (int col = 0; col < C; col++)
            if (a[row][col] == target)
                return true;
    return false;
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int a[R][C];

    // Taking input Row-wise

    for (int row = 0 ; row <  R; row++)
        for (int col = 0; col < C; col++)
            cin >> a[row][col];

    int val; cin >> val;

    print(a);

    if (LinearSearch(a, val))
        cout << val << " FOUND" << nl;
    else
        cout << val << " NOT FOUND" << nl;

    return 0;
}