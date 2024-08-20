#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

// Sum of all factors of a number

//_____O(sqrt(n)_________________________

int FactorSum(int n) {

    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;

            if ((n / i) != i)
                sum += (n / i);
        }
    }
    return sum;
}


int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int n; cin >> n;

    int ans = FactorSum(n);
    cout << "Sum is: " << ans << nl;

    return 0;
}