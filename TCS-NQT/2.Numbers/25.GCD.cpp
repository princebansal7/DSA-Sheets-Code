#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//--- WAY-1 TC: O(min(a,b))------------------

int GCD1(int a, int b)
{
    int ans = 1;
    int res = min(a, b);
    for (int i = 2; i <= res; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

//--- WAY-2 (Euclidean’s theorem) SC: O(logɸmin(a,b)),where ɸ is 1.61----------------------
/*
    Gcd is the greatest number which is divided by both a and b.If a number is divided by
    both a and b, it is should be divided by (a-b) and b as well

    gcd(a,b) = gcd(b,a%b) , b>a

*/

int GCD2(int a, int b)
{
    if (b == 0)
        return a;
    return GCD2(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;

    int ans;

    // ans = GCD1(a, b);
    ans = GCD2(a, b);

    cout << "GCD(" << a << "," << b << ") = " << ans << nl;
    return 0;
}