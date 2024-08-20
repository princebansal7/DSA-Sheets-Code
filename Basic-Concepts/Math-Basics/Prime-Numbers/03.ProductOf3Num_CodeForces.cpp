#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"


int main()
{
// #ifdef PRINCE
//     freopen("debug.txt", "w", stderr);
// #endif
    // fast_io
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int a, b, c;
        a = b = c = n;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = i; // smallest factor
                break;
            }
        }

        n = n / a;
        for (int i = 2; i * i <= n; i++) { // getting second smallest factor, which is not equal to a
            if (n % i == 0) {
                if (i != a) {
                    b = min(b, i);
                }
                if ((n / i) != i) {
                    if ((n / i) != a) {
                        b = min(b, (n / i));
                    }
                }
            }
        }
        c = n / b;
        if (c > 1 && a != b && b != c && a != c) {
            cout << "YES" << nl;
            cout << a << " " << b << " " << c << nl;
        }
        else
            cout << "NO" << nl;
    }
    return 0;
}