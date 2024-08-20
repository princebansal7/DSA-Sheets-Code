/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Here need to count the set bits => in the binary representation of num, how many bits are 1

// UNDERSTNDING:
// eg1: n = 5
//      5 = 0101 =>  2 set bits

// eg2: n = 7
//      7 = 0111 =>  3 set bits

// eg7: n = 15
//      15 = 1111 => 4 set bits

int main()
{
    int n;
    cin >> n;
    int setBits = 0;
    while (n > 0) {
        bool bit = n & 1; // gives the last bit 0 or 1
        if (bit)
            setBits++;
        n = n >> 1; // moving bits right side one by one till number becomes 0
    }
    cout << "No of Set Bits: " << setBits << nl;

    return 0;
}