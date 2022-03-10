#include<bits/stdc++.h>
using namespace std;

void SimpleTraversal(vector<vector<int>> &mat, int row, int col) {

    vector<int> ans;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            ans.push_back(mat[i][j]);    // can directly print here too
    }

    cout << "Linear Traversal is:\n ";

    for (int x : ans)
        cout << x << " ";
    cout << "\n\n";
}

void SnakeTraversal(vector<vector<int>> &mat, int row, int col) {

    vector<int> ans;

    for (int i = 0; i < row; i++) {
        if ( i % 2 == 0) {
            for (int j = 0; j < col; j++)
                ans.push_back(mat[i][j]);  // can directly print here too
        }
        else {
            for (int j = col - 1; j >= 0; j--)
                ans.push_back(mat[i][j]); // can directly print here too
        }
    }

    cout << "Snake Traversal is:\n ";

    for (int x : ans)
        cout << x << " ";
    cout << "\n\n";
}

void BoundryTraversal(vector<vector<int>> &mat, int row, int col) {


    cout << "Boundry Traversal is:\n ";
    // Corner Cases

    if (row == 1) { // given matrix have only 1 row
        for (int j = 0; j < col; j++)
            cout << mat[0][j] << " ";
    }
    else if (col == 1) { // given matrix have only 1 column
        for (int i = 0; i < row; i++)
            cout << mat[i][0] << " ";
    }
    else {

        // printing top row (left to right)
        for (int j = 0; j < col; j++)
            cout << mat[0][j] << " ";

        // printing right column (top to down)
        for (int i = 1; i < row; i++)
            cout << mat[i][col - 1] << " ";

        // printing bottom row (from right to left)
        for (int j = col - 2; j >= 0; j--)
            cout << mat[row - 1][j] << " ";

        // printing left column (from down to top)
        for (int i = row - 2; i >= 1; i--)
            cout << mat[i][0] << " ";
    }
    cout << "\n\n";

}


void TransPonse(vector<vector<int>> &mat, int row, int col) {

    if (row != col) {
        cout << "Not A Square Matrix\n";
        return;
    }

    vector<vector<int>> temp;

    for (auto x : mat)
        temp.push_back(x);

    cout << "Transpose of Matrix is\n";

    /*___________way-1______________________________________________________

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                if (i != j && i < j) { // ignoring daigonals and swapping with just upper trianglur elements
                    swap(temp[i][j], temp[j][i]);
                }
            }
        }
    ________________________________________________________________________*/

    // __________________________WAY-2_____________________________________

    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) {

            // swapping with just upper trianglur elements
            swap(temp[i][j], temp[j][i]);
        }
    }
    //printing

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cout << temp[i][j] << " ";
        cout << endl;
    }
    cout << "\n";
}

int main()
{

    int row, col; cin >> row >> col;

    vector<vector<int>> mat(row, vector<int> (col));

    for (int i = 0 ; i < row ; i++)
        for (int j = 0 ; j < col ; j++)
            cin >> mat[i][j];

    SimpleTraversal(mat, row, col);

    SnakeTraversal(mat, row, col);

    BoundryTraversal(mat, row, col);

    TransPonse(mat, row, col);  // Must be Square matrix


    return 0;
}

