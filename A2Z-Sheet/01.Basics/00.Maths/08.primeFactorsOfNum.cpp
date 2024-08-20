/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

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

// TC: O(n * sqrt(n))

void primeFactors1(int n)
{
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i))
            cout << i << " ";
    }
    cout << nl;
}

// TC ~ O(sqrt(n) * ( 2 * sqrt(n) )): Approx as won't be checking for all the factors

void primeFactors2(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (isPrime(i)) {
                ans.push_back(i);
                if (n / i != i) {
                    if (isPrime(n / i)) {
                        ans.push_back(n / i);
                    }
                }
            }
        }
    }
    for (int x : ans)
        cout << x << " ";
    cout << nl;
}

// school way
// TC: if number is prime => O(n)
// TC: if number is not prime => reduced t.c
//
// eg: 780 = 2,3,5,13 (loop runs 13 times)
// eg: 37 (loop runs 37 times)

void primeFactors3(int n)
{
    vector<int> ans;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    for (int x : ans)
        cout << x << " ";
    cout << nl;
}

// school way (Optimised)
// TC: O(sqrt(n) * log(n))

void primeFactors4(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n != 1)
        ans.push_back(n);

    for (int x : ans)
        cout << x << " ";
    cout << nl;
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << "Prime factors of " << n << " are:" << nl;

    // primeFactors1(n);
    // primeFactors2(n);
    // primeFactors3(n);
    primeFactors4(n);

    return 0;
}