#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

/*___Way-1_____________________________________________________

        1. Take transpose
        2. Swap 1st column with last column , 2nd column with 2nd last column and so on...
*/

void TransPose(vector<vector<int>> &arr) {

    int n = arr.size();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i < j)
                swap(arr[i][j], arr[j][i]);
}


void rotateby90(vector<vector<int>> &arr) {

    int n = arr.size(); // as given matrix is n*n

    TransPose(arr);

    int colStart = 0, colEnd = n - 1;

    while (colStart < colEnd) {
        for (int row = 0; row < n; row++) {
            swap(arr[row][colStart], arr[row][colEnd]);
        }
        colStart++;
        colEnd--;
    }
}

/*_____________________Way-2__________________________

  1. Take Transpose
  2. reverse each row individually
*/

void rotateby90WAY2(vector<vector<int>> &arr) {

    int n = arr.size(); // as given matrix is n*n

    TransPose(arr);

    for (int row = 0; row < n; row++) {
        reverse(arr[row].begin(), arr[row].end());
    }
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int  n; cin >> n;

    vector<vector<int>> arr(n, vector<int> (n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];


    cout << "After Rotating 90 deg:\n";

    rotateby90WAY2(arr);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << nl;
    }

    return 0;
}