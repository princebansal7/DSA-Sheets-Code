#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"
/*
    i/p:
        3 3
        1 2 3
        4 5 6
        7 8 9
    o/p: 1 4 7 8 5 2 3 6 9
*/

//_______TC: O(row*col)_________________________

vector<int> WavePrint(vector<vector<int>>& arr, int n, int m)
{

    vector<int> ans;

    for (int col = 0; col < m; col++) {

        if (col % 2 == 0) {
            for (int row = 0; row < n; row++)
                ans.push_back(arr[row][col]);
        } else {
            for (int row = n - 1; row >= 0; row--)
                ans.push_back(arr[row][col]);
        }
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

    vector<int> ans = WavePrint(arr, n, m);

    for (int x : ans)
        cout << x << " ";

    return 0;
}