#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

//_________Using Two Pointer, TC: O(m+n)_________________________________

bool Search(vector<vector<int>>& matrix, int target) {

    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    int row = 0, col = colSize - 1;

    while (row < rowSize && col >= 0) {

        int start = matrix[row][col]; // top right se start krtey hain
        if (start == target)
            return true;
        else if (target < start)
            col--;
        else
            row++;
    }
    return false;
}



int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int  n, m; cin >> n >> m;

    vector<vector<int>> arr(n, vector<int> (m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int val; cin >> val;

    bool ans = Search(arr, val);

    if (ans)
        cout << "found" << nl;
    else
        cout << "not found" << nl;

    return 0;
}