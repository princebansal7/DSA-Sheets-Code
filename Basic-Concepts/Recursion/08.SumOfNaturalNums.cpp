/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long

// TC: Theta(N), SC: O(N)

int sumOfN(int n)
{
    if (n == 1 or n == 0)
        return n;

    return n + sumOfN(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << sumOfN(n) << nl;

    return 0;
}