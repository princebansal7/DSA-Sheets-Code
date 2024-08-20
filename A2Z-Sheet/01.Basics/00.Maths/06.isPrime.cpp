/*
    @author: princebansal_
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// TC: O(n)
bool isPrime1(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    if (cnt == 2)
        return true;
    return false;
}

// TC: O(sqrt(n))
bool isPrime2(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    if (cnt == 2)
        return true;
    return false;
}

// TC: O(sqrt(n))
bool isPrime3(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
        if (cnt > 2) // avoiding extra iterations if number is not prime
            break;
    }
    if (cnt == 2)
        return true;
    return false;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    // isPrime1(n) ? cout << "Prime number" << nl : cout << "Not a prime number" << nl;
    isPrime3(n) ? cout << "Prime number" << nl : cout << "Not a prime number" << nl;

    return 0;
}