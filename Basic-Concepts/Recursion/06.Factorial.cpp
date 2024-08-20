/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// This factorial function isn't tail recursive
int fact(int n)
{
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

// Below fact() is Tail Recursive
// Can pass k=1 in function call too

int fact_TailRecursive(int n, int k = 1)
{
    if (n == 0 || n == 1) {
        return k;
    }
    return fact_TailRecursive(n - 1, k * n);
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n) << nl;

    cout << fact_TailRecursive(n) << nl;
    return 0;
}