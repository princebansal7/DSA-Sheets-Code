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
  int n; cin >> n;
  int a[n];
  int i = 0;
  while (n > 0)
  {
    a[i] = n % 2;
    n /= 2;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)
    cout << a[j];
  return 0;
}