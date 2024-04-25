#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// Iterative way: SC: O(1), TC: O(N)

int fact1(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

// Recursive way: SC: O(n), TC: O(N)

int fact2(int n)
{
    if (n == 0)
        return 1;
    return n * fact2(n - 1);
}
int main()
{

    int n;
    cin >> n;

    int ans;

    // ans = fact1(n);
    ans = fact2(n);

    cout << n << "! = " << ans << nl;

    return 0;
}