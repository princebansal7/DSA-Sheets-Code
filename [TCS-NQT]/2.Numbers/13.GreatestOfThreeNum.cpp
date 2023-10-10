#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

double findMax1(double a, double b, double c)
{
    if (a > b and a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

double findMax2(double a, double b, double c)
{
    // return max(a, (b, c)); (not preferable)
    //        or
    return max(a, max(b, c));
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double ans;

    // ans = findMax1(a, b, c);
    ans = findMax2(a, b, c);

    cout << "Greater is: " << ans << nl;
    return 0;
}