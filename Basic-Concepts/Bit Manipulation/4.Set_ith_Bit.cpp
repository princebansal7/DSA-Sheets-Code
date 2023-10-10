/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Here need to set the ith bit

// LOGIC:
// eg: n = 5, i = 1
//     5 =  0     1    0    1
//         i=3   i=2  i=1  i=0

// => ith => 1th bit is 0 in 5 => we need to set it.

// UNDERSTNDING:
// eg: n = 5, i = 1
//    mask = (1<<i) => (1<<1) => (0001)<<1 => (0010)
//    Now,
//        (n | (mask)) => (5 | (1<<1)):
//                     => ( (0101) | (0010) ):
//        =>              0101
//                      | 0010
//                      ________
//                        0111  => ith bit of num is 1 (set) now
//   => 5 becomes 7
// NOTE: Here ith bit is the rightmost bit (which starts from 0 internally in systems)
//      so, if in question they say that i starts from 1, then simply replace i with i-1

int main()
{
    int num, i;
    cin >> num >> i;
    int newNum = (num | (1 << i)); // here 1<<i is required 'mask'
    cout << "After setting " << i << "th bit of " << num << " it becomes " << newNum << nl;
    return 0;
}