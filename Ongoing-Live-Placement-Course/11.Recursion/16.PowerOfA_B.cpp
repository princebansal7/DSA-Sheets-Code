/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/* Efficient than iterative way:-

    a^b => if b even => a^(b/2) *  a^(b/2))
        => if b odd => a * (a^(b/2) *  a^(b/2))

*/

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int ans = power(a, b / 2);

    if (b & 1)
        return a * ans * ans;

    return ans * ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << a << "^" << b << " is: " << ans << nl;

    return 0;
}