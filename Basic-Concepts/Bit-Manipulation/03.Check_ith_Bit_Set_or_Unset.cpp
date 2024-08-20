/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Here we are checking whether ith bit is set (1) or unset (0)

// LOGIC:
//      0 & 1 = 0
//      1 & 1 = 1   => (bit & 1) = bit
// eg: n = 5, i = 2
//     5 =  0     1    0    1
//         i=3   i=2  i=1  i=0

// => ith => 2th bit is 1 in 5
// => ans = 1

// UNDERSTNDING:
//    eg: n = 5, i = 2
//    mask = (1<<i) => (1<<2) => (0001)<<2 => (0100)
//    Now,
//        (n & (mask)) => (5 & (1<<2)):
//        => ( (0101) & (0100) ):
//        =>              0101
//                      & 0100
//                      ________
//                        0100  => non zero value => ith bit is 1 (set), otherwise it's 0 (unset)

// NOTE: Here ith bit is the rightmost bit (which starts from 0 internally in systems)
//      so, if in question they say that i starts from 1, then simply replace i with i-1

int main()
{
    int num, i;
    cin >> num >> i;
    if (num & (1 << i)) // here 1<<i is required 'mask'
        cout << i << "th Bit is " << 1 << " => Set Bit" << nl;
    else
        cout << i << "th Bit is " << 0 << " => Unset Bit" << nl;
    return 0;
}