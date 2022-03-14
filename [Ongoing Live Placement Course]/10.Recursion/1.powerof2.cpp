#include <iostream>
using namespace std;
#define nl "\n"

int PowOf2(int val)
{
    if (val == 0) // base case
        return 1;
    return 2 * PowOf2(val - 1);
}

int main()
{
    int n;
    cout << "Enter Power: ";
    cin >> n;
    int ans = PowOf2(n);
    cout << "2^" << n << " = " << ans << nl;
    return 0;
}