#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

// Way-1.Basic Method, TC: O(min(a,b))___________________

int findGCD(int a, int b) {
    int m = min(a, b);
    for (int gcd = m; gcd >= 1; gcd--) {
        if (a % gcd == 0 && b % gcd == 0)
            return gcd;
    }
    return 1;
}

//Way-2.Euclid's Algo for GCD (Iterative way)__________________________

// gcd(a,b) = gcd(a-b,b) or gcd(a%b,b) , a>b

int gcd(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

/* WAy-3. Using formula:

            gcd(a,b) * lcm(a,b) = a * b
*/

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int a, b; cin >> a >> b;

    cout << __gcd(a, b) << nl;   // using Inbuilt gcd function
    cout << findGCD(a, b) << nl;
    cout << gcd(a, b) << nl;

    return 0;
}
