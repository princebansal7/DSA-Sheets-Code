#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

/*--------------------------------
bool isPrime1(int n)
{
    if(n<=1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
----------------------------------*/

/*--------------------------------------------

bool isPrime2(int n)
{
    if(n<=1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
----------------------------------------------*/

bool isPrime3(int n)
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
    int n;
    cin >> n;
    if (isPrime3(n))
        cout << "Prime" << nl;
    else
        cout << "Not Prime" << nl;
    return 0;
}