/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// TC: O(N), SC: O(N)

// Head recusrive function
void print1toN(int n)
{
    if (n == 0)
        return;

    print1toN(n - 1); // after recursive call, other work also being done by function

    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print1toN(n);
    cout << nl;
    return 0;
}