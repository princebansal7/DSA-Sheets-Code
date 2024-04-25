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

void MinimumSumRow(int a[][C])
{

    int MinRow;
    int MinSum = INT_MAX;
    for (int row = 0; row < R; row++) {
        int RowSum = 0;
        int index;
        for (int col = 0; col < C; col++) {
            RowSum += a[row][col];
            index = row;
        }
        cout << row << ".Row-Sum: " << RowSum << nl;
        if (MinSum > RowSum) {
            MinRow = index;
            MinSum = RowSum;
        }
    }
    cout << "Row Having Min sum is: ";
    cout << MinRow << nl << nl;
}

void MinimumSumCol(int a[][C])
{

    int MinSum = INT_MAX;
    int MinCol = -1;
    for (int col = 0; col < C; col++) {
        int ColSum = 0;
        int index;
        for (int row = 0; row < R; row++) {
            ColSum += a[row][col];
            index = col;
        }
        cout << col << ".Col-Sum: " << ColSum << nl;
        if (MinSum > ColSum) {
            MinSum = ColSum;
            MinCol = index;
        }
    }
    cout << "Column Having Min sum is: ";
    cout << MinCol << nl << nl;
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

    MinimumSumRow(a);

    MinimumSumCol(a);

    return 0;
}