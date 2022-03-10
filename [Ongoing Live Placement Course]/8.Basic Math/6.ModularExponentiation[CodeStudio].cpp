#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

/* Way-1: Naive Method,(Works for Small input only)________________________

int ModularExp(int x, int n, int m) {

    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * x;
    ans = ans % m;
    return ans;
}
______________________________________________________________*/

int ModularExp(int x, int n, int m) {

    int ans = 1;
    while (n > 0) {
        if (n & 1) {
            ans = (1LL * (ans) * (x) % m) % m;
        }
        x = (1LL * x * (x) % m) % m;
        n = n >> 1;
    }
    return ans;
}


int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int x, n, m; cin >> x >> n >> m;

    int ans = ModularExp(x, n, m);

    cout << ans << nl;
    cout << sizeof(1LL);

    return 0;
}
