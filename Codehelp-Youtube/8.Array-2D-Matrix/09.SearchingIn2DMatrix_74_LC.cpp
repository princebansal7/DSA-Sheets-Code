#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

//_______way-1__Using Two Pointer, TC: O(m+n)_________________________________

/*
    - Works for Both Sorted matrix i.e,
      sorted row-wise and colmun-wise

*/

bool Search1(vector<vector<int>>& matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int i = 0, j = col - 1;
    while (i < row && j >= 0) {
        int start = matrix[i][j]; // top right se start krtey hain
        if (start == target)
            return true;
        else if (target < start)
            j--;
        else
            i++;
    }
    return false;
}

//______way-2__Using Binary Search,TC: O(log(m*n))_________

/*
    - Works when, Complete matrix is sorted such that, when we represent each row
      linearlly, it form linear sorted 1D array
*/

bool Search2(vector<vector<int>>& matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    while (start <= end) {

        int mid = start + (end - start) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;

        int MidElement = matrix[rowIndex][colIndex];
        if (MidElement == target)
            return true;
        else if (target > MidElement)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
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

    int val;
    cin >> val;

    bool ans = Search2(arr, val);

    if (ans)
        cout << "found" << nl;
    else
        cout << "not found" << nl;

    return 0;
}