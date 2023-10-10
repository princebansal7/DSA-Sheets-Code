/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// TC: O(N), SC: O(N)

// Tail Recusive Function
void printNto1(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    printNto1(n - 1); // last thing happening is recursion call
}

// we'll learn about "Tail Call Elimination" in modern compilers too
// it reduces recursion call stack auxillary space theta(1)

int main()
{
    int n; // let n>=1 (input)
    cin >> n;
    printNto1(n);
    cout << nl;
    return 0;
}