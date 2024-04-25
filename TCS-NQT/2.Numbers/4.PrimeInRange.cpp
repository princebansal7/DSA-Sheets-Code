#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int min, max;
    cin >> min >> max;

    for (int i = min; i <= max; i++)
        if (isPrime(i))
            cout << i << " ";

    cout << nl;
    return 0;
}