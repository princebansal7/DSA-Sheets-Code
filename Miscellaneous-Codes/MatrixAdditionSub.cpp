#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair


// Sample Input:
// 3 4

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// 69 7 71 72
// 73 4 75 70
// 23 8 9 80

int main()
{
  //fast_io;
  int row, col; cin >> row >> col;
  int m1[row][col], m2[row][col], res1[row][col], res2[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      cin >> m1[i][j];
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      cin >> m2[i][j];
  }

// ADDING MATRIX
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      res1[i][j] = m1[i][j] + m2[i][j];
  }
// Subtracting MATRIX 2 from Matrix 1
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      res2[i][j] = m1[i][j] - m2[i][j];
  }

  cout << "\nAfter Addition:\n";
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      printf("%4d", res1[i][j]);
    cout << "\n";
  }
  cout << "\nAfter subtraction:\n";
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      printf("%4d", res2[i][j]);
    cout << "\n";
  }
  return 0;
}