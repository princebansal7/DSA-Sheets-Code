/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// prints number's binary

// 1. dividing the number
// 2. waiting for remainder
// 3. printing remainder in reverse automatically using recursion
void fun(int n)
{
    if (n == 0)
        return;
    fun(n / 2);
    cout << (n % 2);
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    cout << nl;
    return 0;
}