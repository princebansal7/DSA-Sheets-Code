#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair

bool pairSum(int a[], int n, int sum)
{
  unordered_set<int> s;
  for (int i = 0; i < n; i++)
  {
    if (s.find(sum - a[i]) == s.end())
      s.insert(a[i]);
    else
      return true;

  }
  return false;
}

int main()
{
  fast_io;
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int sum; cin >> sum;
  bool res = pairSum(a, n, sum);
  if (res)
    cout << "Yes";
  else
    cout << "NO";
  return 0;
}