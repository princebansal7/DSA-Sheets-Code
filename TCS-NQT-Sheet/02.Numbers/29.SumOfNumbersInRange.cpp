#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// Naive Way TC: O(n)---------------------------

int sumInRange1(int l, int r)
{
    int sum = 0;
    for (int i = l; i <= r; i++)
        sum += i;
    return sum;
}

// Optimised Way- TC: O(1)----------------------

int sumInRange2(int l, int r)
{
    int sum = 0;

    // find sum from 1 to r
    int sumTillR = r * (r + 1) / 2;

    // find sum from 1 to l-1

    int sumTillLMinusOne = (l - 1) * (l) / 2; // (l-1)*((l-1)+1)/2 => (l-1)*(l)/2

    // getting required Sum => (sum from 1 to r) - (sum from 1 to l-1)

    sum = sumTillR - sumTillLMinusOne;

    return sum;

    /*
        In One Step:
        return (r*(r-1))/2 - ((l-1)*(l) / 2
    */
}

int main()
{
    int l, r;
    cin >> l >> r;

    int ans;
    ans = sumInRange2(l, r);

    cout << "Sum is: " << ans << nl;

    return 0;
}