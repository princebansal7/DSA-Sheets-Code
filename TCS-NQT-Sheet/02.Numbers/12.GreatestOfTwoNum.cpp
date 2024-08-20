#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

double findMax1(double a, double b)
{
    return (a > b) ? a : b;
}

double findMax2(double a, double b)
{
    return max(a, b);
}

int main()
{
    double a, b;
    cin >> a >> b;

    double ans;
    ans = findMax1(a, b);
    // ans = findMax2(a, b);

    cout << "Greater is: " << ans << nl;
    return 0;
}