/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Here need to check whether the given number is power of 2 or not

// UNDERSTNDING:

// eg1: n = 4
//      4 = 0100 => only 1 set bit

// eg2: n = 8
//      8 = 1000 =>  only 1 set bit

// eg7: n = 16
//      16 = 10000 => only 1 set bit

// => number which is power of 2 have only 1 set bit

int main()
{
    int n;
    cin >> n;
    int setBit = 0;
    while (n > 0) {
        if (n & 1)
            setBit++;
        n = n >> 1; // moving bits right side one by one till number becomes 0
    }

    if (setBit == 1)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    return 0;
}