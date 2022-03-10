#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &mat, int r, int c) {

    /*________WAY-1 [O(n*m) and Auxillary space O(n*m)]_____________________________

        // 1. putting matix elements in temporary Array
        // 2. Sorting the temp array
        // 3. As Matrix is of odd order, simply finding middle element will gives the Median.
        vector<int> temp;

        for (int i = 0 ; i < r ; i++)
            for (int j = 0 ; j < c ; j++)
                temp.push_back(mat[i][j]);

        sort(temp.begin(), temp.end());

        int size = temp.size();
        int mid = (size / 2);
        return temp[mid];
    ________________________________________________________________________________*/

    //_____________WAY-2_________________________________________________________



}


int main()
{

// #ifndef ONLINE_JUDGE
//     freopen("debug.txt", "w", stderr);
// #endif

    int row, col; cin >> row >> col;

    vector<vector<int>> mat(row, vector<int> (col, 0));

    for (int i = 0 ; i < row ; i++)
        for (int j = 0 ; j < col ; j++)
            cin >> mat[i][j];


    cout << "Median is: " << median(mat, row, col);
    return 0;
}

