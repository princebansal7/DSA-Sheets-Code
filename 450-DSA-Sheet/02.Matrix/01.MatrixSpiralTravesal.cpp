#include <bits/stdc++.h>
using namespace std;

/*__________WAy-1______________________________________________________

vector<int> SpiralPrint(vector<vector<int>> &arr) {

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


_______________________________________________________________________*/

//______Way-2____________________________________________________________

void SpiralTraversal(vector<vector<int>>& mat, int row, int col)
{

    cout << "Spriral Traversal is:\n ";

    int top = 0, left = 0, right = col - 1, bottom = row - 1;

    while (top <= bottom && left <= right) {

        // printing top row layer
        for (int j = left; j <= right; j++)
            cout << mat[top][j] << " ";
        top++;

        // printing right cloumn layer
        for (int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";
        right--;

        // printing bottom layer
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                cout << mat[bottom][j] << " ";
            bottom--;
        }

        // printing left column layer
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";
            left++;
        }
    }

    cout << "\n\n";
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col));

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> mat[i][j];

    SpiralTraversal(mat, row, col);

    return 0;
}