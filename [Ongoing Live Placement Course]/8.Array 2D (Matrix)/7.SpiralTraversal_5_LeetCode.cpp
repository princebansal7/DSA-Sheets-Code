#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"
/*
    i/p:
        4 4
        1  2  3  4
        5  6  7  8
        9  10 11 12
        13 14 15 16

    o/p: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

vector<int> SpiralPrint(vector<vector<int>>& arr)
{

    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    int count = 0;
    int total = row * col;
    // Indexes

    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;

    //_______TC: O(row*col)_________________________

    while (count < total) {

        // printing starting row
        for (int index = startRow; count < total && index <= endCol; index++) {
            ans.push_back(arr[startRow][index]);
            count++;
        }
        startRow++;

        // printing ending column
        for (int index = startRow; count < total && index <= endRow; index++) {
            ans.push_back(arr[index][endCol]);
            count++;
        }
        endCol--;

        // printing ending row
        for (int index = endCol; count < total && index >= startCol; index--) {
            ans.push_back(arr[endRow][index]);
            count++;
        }
        endRow--;

        // printing starting column
        for (int index = endRow; count < total && index >= startRow; index--) {
            ans.push_back(arr[index][startCol]);
            count++;
        }
        startCol++;
    }

    return ans;
}

int main()
{
    fast_io

        int n,
        m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    vector<int> ans = SpiralPrint(arr);

    for (int x : ans)
        cout << x << " ";

    return 0;
}