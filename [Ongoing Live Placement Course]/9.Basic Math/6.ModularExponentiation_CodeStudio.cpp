#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

/*
Formulae:

a % n => [0,(n-1)]
(a + b) % m = a % m + b % m
(a - b) % m = a % m - b % m
(a * b) % m = a % m * b % m


*/

// Way-1: Naive Method,(Works for Small input only)____________
// x^n

int ModularExp1(int x, int n, int m)
{

    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * x;
    ans = ans % m;
    return ans;
}

// a^b  => (a^b/2)^2 => if b is even
//      => (a^b/2)^2 * a => if be is odd

int ModularExp2(int x, int n, int m)
{

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
    int x, n, m;
    cin >> x >> n >> m;

    int ans = ModularExp2(x, n, m);

    cout << ans << nl;
    cout << sizeof(1LL);

    return 0;
}
