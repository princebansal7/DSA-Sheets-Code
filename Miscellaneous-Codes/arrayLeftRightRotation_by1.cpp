#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
  fast_io;
  vector<int> a = {1, 2, 3,4,5,6,7};
  int n = a.size();

  // left Rotation by 1

  int temp = a[0];
  for (int i = 1; i < n; i++)
  {
    a[i - 1] = a[i];
  }
  a[n - 1] = temp;
  for (int x : a)
    cout << x << " ";

  cout << endl;

  //Right Rotation by 1

  vector<int> a2 = {1, 2, 3};
  int temp2 = a2[n - 1];
  for (int i = n - 1; i >= 0; i--)
  {
    a2[i] = a2[i - 1];
  }
  a2[0] = temp2;
  for (int x : a2)
    cout << x << " ";

  return 0;
}