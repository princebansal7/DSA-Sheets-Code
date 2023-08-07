#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

/*____WAY-1___________________________________

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;

            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }

        return r;
    }
____________________________________________*/

//____WAY-2 (Easy to Understand)_________________

vector<vector<int>> generate(int n)
{
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {

        vector<int> row(i + 1, 1); // creating rows with initial value 1

        for (int j = 1; j < i; j++) {
            // each block in a row will have sum of the blocks (just above one, and one before it)
            // in previous row except the 1st and last block in each row

            row[j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        ans.push_back(row);
    }
    return ans;
}

int main()
{

    vector<vector<int>> ans;

    int n;
    cin >> n;

    ans = generate(n);

    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << nl;
    }

    return 0;
}