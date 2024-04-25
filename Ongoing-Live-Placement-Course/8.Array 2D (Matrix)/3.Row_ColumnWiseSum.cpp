#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

const int R = 3;
const int C = 4;

void print(int a[][C])
{
    cout << "Matrix is:\n";
    for (int row = 0; row < R; row++) {
        for (int col = 0; col < C; col++)
            cout << a[row][col] << " ";
        cout << nl;
    }
    cout << nl;
}

void RowSum(int a[][C])
{

    cout << "Each Row sum is:\n";
    for (int row = 0; row < R; row++) {
        int sum = 0;
        for (int col = 0; col < C; col++) {
            sum += a[row][col];
        }
        cout << sum << " ";
    }
    cout << nl;
}

void columnSum(int a[][C])
{

    int sum = 0;
    cout << "Each Column sum is:\n";
    for (int col = 0; col < C; col++) {
        for (int row = 0; row < R; row++) {
            sum += a[row][col];
        }
        cout << sum << " ";
        sum = 0;
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

    RowSum(a);

    columnSum(a);

    return 0;
}