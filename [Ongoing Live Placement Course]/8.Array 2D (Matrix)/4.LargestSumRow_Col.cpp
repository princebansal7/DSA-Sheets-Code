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

void LargestSumRow(int a[][C])
{

    int MaxRow;
    int MaxSum = -1;
    for (int row = 0; row < R; row++) {
        int RowSum = 0;
        int index;
        for (int col = 0; col < C; col++) {
            RowSum += a[row][col];
            index = row;
        }
        cout << "Row-Sum: " << RowSum << nl;
        if (MaxSum < RowSum) {
            MaxRow = index;
            MaxSum = RowSum;
        }
    }
    cout << "Row Having Max sum is: ";
    cout << MaxRow << nl << nl;
}

void LargestSumCol(int a[][C])
{

    int MaxSum = -1;
    int MaxCol = -1;
    for (int col = 0; col < C; col++) {
        int ColSum = 0;
        int index;
        for (int row = 0; row < R; row++) {
            ColSum += a[row][col];
            index = col;
        }
        cout << "Col-Sum: " << ColSum << nl;
        if (MaxSum < ColSum) {
            MaxSum = ColSum;
            MaxCol = index;
        }
    }
    cout << "Column Having Max sum is: ";
    cout << MaxCol << nl << nl;
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

    LargestSumRow(a);

    LargestSumCol(a);

    return 0;
}