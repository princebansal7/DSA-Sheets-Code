#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target)
{

    /*________ naive approach O(row*col)_____________________

            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j]==target)
                        return true;
                }
            }
     _________________________________________________________       */

    // Using Sorted rows as advantage

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

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> mat[i][j];

    int key;
    cin >> key;

    if (searchMatrix(mat, key))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}