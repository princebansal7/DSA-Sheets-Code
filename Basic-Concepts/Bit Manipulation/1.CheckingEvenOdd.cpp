/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long

// using Bit Manipulation
int main()
{
    int a;
    cin >> a;
    if (a & 1)
        cout << a << " is ODD" << nl;
    else
        cout << a << " is EVEN" << nl;
    return 0;
}