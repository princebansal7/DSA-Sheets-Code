#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*
    -> We know that prime numbers are always Odd. So a prime number (odd) cannot be written as the
       sum of 2 odd prime numbers. So either of them has to be 2 (the only even prime).

    -> Now our question boils down to checking whether n-2 && n prime or not. If both hold true
       return Yes or No

       eg: 13 => YES (11 + 2)
           11 => False
            7 => True (5 + 2)

*/

bool isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

bool isPrimeSum(int n)
{
    if (isPrime(n) && isPrime(n - 2))
        return 1;

    return 0;
}

int main()
{
    int n;
    cin >> n;

    if (isPrimeSum(n))
        cout << "True => can be represented as sum of Two Prime numbers" << nl;
    else
        cout << "False => can't be represented as sum of Two Prime numbers" << nl;
    return 0;
}