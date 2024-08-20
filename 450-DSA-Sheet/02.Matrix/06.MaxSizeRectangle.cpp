#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"
#define MAX 1000

int maxArea(int M[MAX][MAX], int n, int m)
{
    int ans = 0;

    return ans;
}

int main()
{
    fast_io

        int n,
        m;
    cin >> n >> m;

    int arr[MAX][MAX];

    // (Take Binary input )

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << maxArea(arr, n, m) << nl;

    return 0;
}