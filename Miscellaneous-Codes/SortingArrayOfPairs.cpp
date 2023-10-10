#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;

void sortedarr(int a[], char b[], int n)
{
    pair<int, char> p[n];

    for (int i = 0; i < n; i++) {
        // p[i].first = a[i];
        // p[i].second = b[i];

        p[i] = {a[i], b[i]};
    }
    sort(p, p + n); //pair sorted according to 1st value
    
    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
}

int main()
{
    fast_io;

    int a[] = {4, 1, 3, 2};
    char b[] = {'A', 'X', 'B', 'Y'};
    int n = (sizeof(a) / sizeof(a[0]));

    sortedarr(a, b, n);

    return 0;
}
