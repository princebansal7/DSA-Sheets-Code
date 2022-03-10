#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

// Way-1:Basic Method,___________________

int lcm1(int a, int b) {
    int m = max(a, b);
    for (int lcm = m; lcm <= a * b; lcm += m) {
        if (lcm % a == 0 && lcm % b == 0)
            return lcm;
    }
    return m;
}

/* Way-2: using Formula:__________________
        gcd(a,b) * lcm(a,b) = a * b
*/

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

int lcm2(int a, int b) {
    int lcm = (a * b) / gcd(a, b); // (a / gcd(a, b)) * b; (if numbers are big)
    return lcm;
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int a, b; cin >> a >> b;

    cout << lcm2(a, b) << nl;

    return 0;
}
