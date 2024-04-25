#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//--- WAY-1 ------------------

int LCM1(int a, int b)
{
    int ans = 1;
    int res = max(a, b);
    for (int i = res; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

//--- WAY-2 -----------------------------------
/*
    LCM(a,b) = a*b/GCD(a,b) , b>a

*/
int LCM2(int a, int b)
{
    int gcd = 1;
    int res = min(a, b);
    for (int i = 2; i <= res; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    int lcm = a * b / gcd;
    return lcm;
}

// WAY-3 (Euclidean’s theorem)------------------------------

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;

    int ans;

    // ans = LCM1(a, b);

    // ans = LCM2(a, b);

    ans = (a * b) / GCD(a, b);

    cout << "LCM(" << a << "," << b << ") = " << ans << nl;
    return 0;
}