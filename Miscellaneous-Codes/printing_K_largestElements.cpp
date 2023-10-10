#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;

void K_Large(int a[], int n, int k)
{
  priority_queue<int> pq(a, a + n); // Max Heap
  cout << "K largest elements are:\n";
  for (int i = 0; i < k; i++)
  {
    a[i] = pq.top();
    cout << a[i] << " ";
    pq.pop();
  }
}

int main()
{
  fast_io;
  int n, k; cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  K_Large(a, n, k);
  return 0;
}