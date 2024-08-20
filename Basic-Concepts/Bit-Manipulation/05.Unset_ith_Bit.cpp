/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Here need to set the ith bit

// LOGIC:
// eg: n = 5, i = 2
//     5 =  0     1    0    1
//         i=3   i=2  i=1  i=0

// => ith => 2th bit is 1 in 5 => we need to Unset it.

// UNDERSTNDING:
// eg1: n = 5, i = 2
//    mask = ~(1<<i) => ~(1<<2) => ~((0001)<<2) => ~(0100) => (1011)
//    Now,
//        (n & (mask)) => (5 & ~(1<<2)):
//        => ( (0101) & (1011) ):
//        =>              0101
//                      & 1011
//                      ________
//                        0001  => ith bit of num is 0 (Unset) now
//       => 5 becomes 1

// eg2: n = 7, i = 1
//    mask = ~(1<<i) => ~(1<<1) => ~((0001)<<1) => ~(0010) => (1101)
//    Now,
//        (n & (mask)) => (7 & ~(1<<1)):
//        => ( (0111) & (1101) ):
//        =>              0111
//                      & 1101
//                      ________
//                        0101  => ith bit of num is 0 (Unset) now
//   => 7 becomes 5

// NOTE: Here ith bit is the rightmost bit (which starts from 0 internally in systems)
//      so, if in question they say that i starts from 1, then simply replace i with i-1

int main()
{
    int num, i;
    cin >> num >> i;
    int newNum = num & (~(1 << i)); // here ~(1 << i) is required 'mask'
    cout << "After Unsetting " << i << "th bit of " << num << " it becomes " << newNum << nl;
    return 0;
}