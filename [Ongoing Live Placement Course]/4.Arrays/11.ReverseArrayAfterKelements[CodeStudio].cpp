#include<bits/stdc++.h>
using namespace std;

void reverseAfterM(int a[], int n, int m) {

    for (int i = m + 1, j = n - 1; i < j; i++, j--)
        swap(a[i], a[j]);
}


int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];

    reverseAfterM(a, n, m);

    for (int x : a)
        cout << x << " ";

    return 0;
}