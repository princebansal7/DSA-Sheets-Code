#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"


/*______________Non Efficient Way to take Transpose_____________________
void TransPose(vector<vector<int>> &arr) {

    int n = arr.size();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i < j)
                swap(arr[i][j], arr[j][i]);
}
________________________________________________________________________*/

//________Efficeint way to take Transpose (Save CPU cycles)______________

void TransPose(vector<vector<int>> &arr) {

    int n = arr.size();

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(arr[i][j], arr[j][i]);
}

/*___Way-1________TC: O(N*N), SC: O(N*N)_____________________________________________

        1. Take another dummy matrix of same size.
        2. Then take the first row of the matrix and put it in the last column of the
           dummy matrix, take the second row of the matrix,
           and put it in the second last column of the matrix and so on...
*/

void rotateby90WAY1(vector<vector<int>>&arr) {
    int n = arr.size();
    vector<vector<int>> rotated(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - i - 1] = arr[i][j];
        }
    }

    // copying dummy matrix to original matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rotated[i][j];
        }
    }
}

/*___Way-2____TC: O(N*N), SC: O(1)_____________________________________________

        1. Take transpose
        2. Swap 1st column with last column , 2nd column with 2nd last column
           and so on...
*/

void rotateby90WAY2(vector<vector<int>> &arr) {

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

/*_________________Way-3___TC:O(N*N),SC: O(1)______________________

  1. Take Transpose
  2. Then reverse each row individually
*/

void rotateby90WAY3(vector<vector<int>> &arr) {

    int n = arr.size(); // as given matrix is n*n

    TransPose(arr);

    for (int row = 0; row < n; row++) {

        // reverse(arr[row].begin(), arr[row].end());
        int start = 0;
        int end = n - 1;
        while (start < end) {
            int temp = arr[row][start];
            arr[row][start] = arr[row][end];
            arr[row][end] = temp;
            start++;
            end--;
        }
    }
}

int main()
{
    int  n; cin >> n;

    vector<vector<int>> arr(n, vector<int> (n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];


    cout << "After Rotating 90 deg:\n";

    rotateby90WAY3(arr);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << nl;
    }

    return 0;
}