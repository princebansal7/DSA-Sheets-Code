/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// nth fibonacci number (n>=0)

int getNthFib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return getNthFib(n - 1) + getNthFib(n - 2);
}

int getNthFib2(int n)
{
    // short way for base case
    if (n <= 1)
        return n;

    return getNthFib2(n - 1) + getNthFib2(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << getNthFib(n) << nl;
    cout << getNthFib2(n) << nl;

    return 0;
}