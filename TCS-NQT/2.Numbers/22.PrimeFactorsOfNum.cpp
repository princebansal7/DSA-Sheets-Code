#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//-----WAY-1  TC: O(N), SC: O(1)-----------------------

void primeFactors1(int n)
{
    for (int i = 2; n > 1; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
        }
    }
    cout << nl;
}

//-------WAY-2 TC: O(sqrt(N))------------------------

void primeFactors2(int n)
{
    for (int i = 2; i * i <= n, n > 1; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
        }
    }

    cout << nl;
}

int main()
{
    int n;
    cin >> n;

    cout << "Prime Factors of " << n << " are:" << nl;
    primeFactors1(n);
    primeFactors2(n);
    return 0;
}