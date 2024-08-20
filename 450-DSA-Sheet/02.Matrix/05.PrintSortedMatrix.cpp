#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(int n, vector<vector<int>>& mat)
{

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            ans.push_back(mat[i][j]);
    }

    sort(ans.begin(), ans.end());

    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = ans[k++];
        }
    }
    return mat;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    mat = sortedMatrix(n, mat);

    cout << "Matrix After Sorting\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
