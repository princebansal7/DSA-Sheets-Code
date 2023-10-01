#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{

    /*_______________Way-1__[ O(n*m)]_________________________

           int count = 0;
           int maxi = 0;
           int index = -1;
           for (int i = 0; i < n; i++) {
               for (int j = 0; j < m; j++) {
                   if (arr[i][j] == 1)
                       count++;
               }
               if ( count > maxi) {
                   index = i;
                   maxi = count;
               }
               count = 0;

           }
           return index;
    _________________________________________________________*/

    //______________WAy-2 [Two Pointer approach O(m+n) ]____

    // As Given Matrix is row vise Sorted.

    int index = -1;
    int i = 0, j = m - 1;
    while (i < n && j < m) {
        if (arr[i][j] == 1) {
            index = i;
            j--;
        } else
            i++;
    }
    return index;
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> mat[i][j];

    cout << rowWithMax1s(mat, row, col);

    return 0;
}
