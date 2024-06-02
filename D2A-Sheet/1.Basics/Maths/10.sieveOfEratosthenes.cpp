/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// we want to print all prime numbers till n

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
        if (cnt > 2)
            break;
    }
    if (cnt == 2)
        return true;
    return false;
}

// Brute force: O(N*sqrt(n))
void primeTillN1(int n)
{
    if (n <= 1)
        cout << "Not Prime" << nl;
    else {
        for (int i = 2; i <= n; i++) {
            if (isPrime(i))
                cout << i << " ";
        }
        cout << nl;
    }
}

// sieve 1
void seive1(int n)
{
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            cout << i << " ";
        }
    }
    cout << nl;
}

// sieve 2 (optimised): TC: O(n * log(log(n)))
//                      SC: O(n)
void seive2(int n)
{
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            cout << i << " ";
        }
    }
    cout << nl;
}
/*
Explaination why seive 2 is better

        Explanation with Example
        n=30
        Algorithm 1: seive1
        Initialize the prime array: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1] (size n+1)
        Set prime[0] and prime[1] to 0.
        For i = 2:

        Mark multiples of 2: prime[4], prime[6], prime[8], ..., prime[30] as 0.
        For i = 3:

        Mark multiples of 3: prime[6], prime[9], prime[12], ..., prime[30] as 0.
        For i = 4:

        Skip since prime[4] is 0.
        For i = 5:

        Mark multiples of 5: prime[10], prime[15], prime[20], prime[25], prime[30] as 0.
        Continue this process up to i = 30.

        Algorithm 2: seive2
        Initialize the prime array: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1] (size n+1)
        Set prime[0] and prime[1] to 0.
        For i = 2:

        Mark multiples of 2 starting from 4 (2 * 2): prime[4], prime[6], prime[8], ..., prime[30] as 0.
        For i = 3:

        Mark multiples of 3 starting from 9 (3 * 3): prime[9], prime[12], prime[15], ..., prime[30] as 0.
        For i = 4:

        Skip since prime[4] is 0.
        For i = 5:

        Mark multiples of 5 starting from 25 (5 * 5): prime[25], prime[30] as 0.
        Stop here as i * i > n.

        Output
        Both algorithms will output the same primes:

        vbnet
        Copy code
        Primes up to 30 using seive1: 2 3 5 7 11 13 17 19 23 29
        Primes up to 30 using seive2: 2 3 5 7 11 13 17 19 23 29
        Summary
        Algorithm 1 (seive1) iterates through all numbers up to n for both the outer  and inner loops, which results in a time complexity of
        𝑂(𝑛 log𝑛 )
        Algorithm 2 (seive2) iterates through numbers up to sqrt(n)
        for the outer loop and starts marking multiples from i^2,
        resulting in a more efficient time complexity of
        O(nloglogn).
        In practice, Algorithm 2 is faster for large values of n due to fewer iterations.

*/
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    // primeTillN1(n);
    seive1(n);
    seive2(n);
    return 0;
}