#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

const int R = 3;
const int C = 4;

void print(int a[R][C])
{
    for (int row = 0; row < R; row++) {
        for (int col = 0; col < C; col++)
            cout << a[row][col] << " ";
        cout << nl;
    }
    cout << nl;
}

int main()
{
    fast_io

        int a[R][C];

    // Taking input Row-wise

    for (int row = 0; row < R; row++)
        for (int col = 0; col < C; col++)
            cin >> a[row][col];

    print(a);

    // Taking Input Column-wise

    for (int col = 0; col < C; col++)
        for (int row = 0; row < R; row++)
            cin >> a[row][col];

    print(a);

    // By deafult takes Row-Wise

    int b[R][C] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60 };
    print(b);

    int arr[R][C] = { { 11, 22, 33, 44 }, { 55, 66, 77, 88 }, { 99, 80, 70, 60 } };
    print(arr);

    return 0;
}