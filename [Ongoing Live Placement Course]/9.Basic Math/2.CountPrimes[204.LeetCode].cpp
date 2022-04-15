#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

//__Way-1__TC: O(n * sqrt(n))____________________

bool isPrime(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void countPrime(int n) {
    int count = 0;

    cout << "Prime numbers are:\n";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << nl << "Total: " << count << nl;
}

//__________way-2_(seive of eratosthenes) TC: O(n * log(log(n)))_________

void Seive(int n) {

    vector<bool> prime(n + 1, true);
    int count = 0;

    prime[0] = prime[1] = false;
    cout << "Prime numbers are:\n";
    for (int i = 2; i <= n; i++) {

        if (prime[i]) {
            cout << i << " ";
            count++;
            for (int j = 2 * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    cout << nl << "Total: " << count << nl;
}


int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int n; cin >> n;

    // countPrime(n);

    Seive(n);


    return 0;
}