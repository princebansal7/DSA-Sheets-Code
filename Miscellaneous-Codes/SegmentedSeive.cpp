#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long



vector<ll> prime;

void Seive(int n) {

    vector<bool> isPrime(n + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i <= n; i++) {

        if (isPrime[i]) {

            prime.push_back(i);
            for (ll j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
}

// for Large Inputs

void SegSeive(int low, int high) {
    ll sqt = sqrt(high);
    Seive(sqt);

    vector<bool> isPrime(high - low + 1, true);

    for (ll p : prime) {
        ll smallMultiple = (low / p) * p;

        if (smallMultiple < low)
            smallMultiple += p;

        for (ll i = smallMultiple; i <= high; i += p)
            isPrime[i - low] = false;
    }

    for (ll i = low; i <= high; i++)
        if (isPrime[i - low] == true)
            cout << i << " ";
    cout << nl;
}


int main()
{

    fast_io
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int l, h; cin >> l >> h;
    SegSeive(l, h);

    return 0;
}