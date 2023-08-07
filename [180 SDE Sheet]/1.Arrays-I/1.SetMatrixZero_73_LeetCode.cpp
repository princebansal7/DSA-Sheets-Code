// #include <bits/stdc++.h>
#include <climits>
#include <iostream>
#include <vector>
#define nl '\n'
using namespace std;

// Brute force way , TC: O[(n*m)*(n+m)], SC: O(1)

// works for range -2^31 < a[i][j] < 2^31-1 (excluding INT_MAX & INT_MIN)
// INT_MIN = -2^31 = -2147483648 , INT_MAX = 2^31 - 1 = 2147483647

void SetZeros(vector<vector<int>>& a)
{

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {

            if (a[i][j] == 0) { // element 0, so making it's corresponding row and col = INT_MIN

                for (int col = 0; col < a[i].size(); col++) { // travesing row
                    if (a[i][col] != 0) { // Leaving any element which is already 0
                        a[i][col] = INT_MIN;
                    }
                }
                for (int row = 0; row < a.size(); row++) { // travesing col
                    if (a[row][j] != 0) { // // Leaving any element which is already 0
                        a[row][j] = INT_MIN;
                    }
                }
            }
        }
    }

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {

            if (a[i][j] == INT_MIN) // setting Zeroes to required rows and columns
                a[i][j] = 0;
        }
    }
    cout << "\n";
}

// Better way , TC: O(n*m), SC: O(n+m), Works for all given Constraints

void SetZeros2(vector<vector<int>>& a)
{
    int row = a.size();
    int col = a[0].size();

    vector<int> tempRow(row, -1), tempCol(col, -1);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            if (a[i][j] == 0) {
                tempRow[i] = 0;
                tempCol[j] = 0;
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            if (tempRow[i] == 0 || tempCol[j] == 0) {
                a[i][j] = 0;
            }
        }
    }
    cout << endl;
}

// Efficient way , TC: O(n*m), SC: O(1), Works for all given Constraints

void SetZeros3(vector<vector<int>>& a)
{

    bool tempCol = 1;
    int row = a.size(), col = a[0].size();

    for (int i = 0; i < row; i++) {

        if (a[i][0] == 0)
            tempCol = 0;

        for (int j = 1; j < col; j++)
            if (a[i][j] == 0)
                a[i][0] = a[0][j] = 0;
    }

    for (int i = row - 1; i >= 0; i--) {

        for (int j = col - 1; j >= 1; j--) {

            if (a[i][0] == 0 || a[0][j] == 0) {
                a[i][j] = 0;
            }
        }
        if (tempCol == 0)
            a[i][0] = 0;
    }
}

int main()
{
    int row, col;
    cout << "Enter Row and Col: ";
    cin >> row >> col;

    vector<vector<int>> a(row, vector<int>(col));

    cout << "Enter matrix elements: " << nl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }

    SetZeros3(a);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}