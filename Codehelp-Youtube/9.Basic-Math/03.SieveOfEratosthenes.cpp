#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

//_________(seive of eratosthenes) TC: O(n * log(log(n)))_________

void Seive1(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++) {

        if (prime[i]) {
            cout << i << " ";
            // Now marking all who comes in 'prime' number's table as false
            for (int j = 2 * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    cout << nl;
}

void Seive2(int n)
{
    bool prime[n + 1];

    prime[0] = prime[1] = false;

    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
    cout << nl;
}

int main()
{
    int n;
    cin >> n;
    cout << "Prime numbers are:\n";

    Seive1(n);
    Seive2(n);

    cout << nl;
    return 0;
}