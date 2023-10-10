#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair

void interSection(int a[], int n, int b[], int m)
{
  unordered_set<int> s;
  for (int i = 0; i < m; i++)
  {
    s.insert(b[i]);
  }
  for (int i = 0; i < n; ++i)
  {
    if (s.find(a[i]) != s.end())
      cout << a[i] << " ";
    s.erase(a[i]);
  }
}

int main()
{
  fast_io;
  int n, m; cin >> n >> m;

  int a[n], b[m];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  interSection(a, n, b, m);


  return 0;
}