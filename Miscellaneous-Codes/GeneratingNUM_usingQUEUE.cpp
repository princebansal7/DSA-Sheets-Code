#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;

void GenerateNum(int n)
{
  queue<string> q;
  q.push("5");
  q.push("6");
  for (int i = 0; i < n; ++i)
  {
    string curr = q.front();
    cout << curr << " ";
    q.pop();
    q.push(curr + "5");
    q.push(curr + "6");
  }
}

int main()
{
  fast_io;
  int n; cin >> n;
  GenerateNum(n);
  return 0;
}