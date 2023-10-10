#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

//-------Iterative way: TC: O(N)------------------------------

int power1(int n, int p)
{
    int res = 1;
    for (int i = 1; i <= p; i++)
        res = res * n;

    return res;
}

/*        Binary Exponentiation way:

    1. Maintain a variable ans to store the final answer.
    2. If p is even, square n and divide p by 2.as n*p can be written as (n*2)^p/2  i.e (n*n)*p/2.
    3. If p is odd, multiply ans with n and reduce p by 1, as n*p can be written as n*(n)^p-1. (p-1 is even now)
    4. Print the ans.
*/
//----TC: O(log N) SC: O(1)--[Iterative Code]-----------------

int power2(int n, int p)
{
    int res = 1;
    while (p != 0)
    {
        if (p & 1)
        {
            // if power is odd
            res = res * n;
            p--;
        }
        else
        {
            // if power is even
            n = n * n;
            p = p / 2;
        }
    }
    return res;
}

//----TC: O(log N) SC: O(n)--[Recursive Code]-----------------

int power3(int a, int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return a;
    int res = power3(a, p / 2);

    if (p & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
}

// ----WAY-4----------------------

int power4(int n, int p)
{
    return pow(n, p);
}
int main()
{
    int n, p;
    cin >> n >> p;

    int ans;

    // ans = power1(n, p);
    // ans = power2(n, p);
    // ans = power3(n, p);
    ans = power4(n, p);

    cout << n << "^" << p << " = " << ans << nl;
    return 0;
}