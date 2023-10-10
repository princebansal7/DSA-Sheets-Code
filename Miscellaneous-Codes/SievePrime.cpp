#include<bits/stdc++.h>
using namespace std;

//____Naive way O(sqrt(n))______________________________

bool isPrime(long long n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


/*___Sieve of Rratosthenes method________________________

1.Basic Way

void sievePrime(int n) {

    vector<int> ans;

    vector<bool> prime(n + 1, true);
    int count = 0;

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++) {

        if (prime[i]) {
            count++;
            ans.push_back(i);
            for (int j = 2 * i; j < n; j = j + i)
                prime[j] = false;
        }
    }

    for (auto x : ans)
        cout << x << " ";

    cout << endl;

    cout << "Total Prime no till " << n << " are: " << count << endl;
}

_______________________________________________________________________*/

// 2. Optimised Seive

void Seive(int n) {

    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; i++) {

        if (prime[i]) {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    long long n; cin >> n;

    // if (isPrime(n))
    //     cout << "Yes, Prime" << endl;
    // else
    //     cout << "No, Not Prime" << endl;

    Seive(n);

    return 0;
}