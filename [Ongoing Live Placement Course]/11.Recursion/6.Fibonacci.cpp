#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int fibUsingForLoop(int n)
{
    if (n == 0 || n == 1)
        return n;

    int prev1 = 0, prev2 = 1;
    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}
int main()
{
    // 0 1 1 2 3 5 8 13 21 34 55 89 144....

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << n << "th Fibonacci number is: " << fib(n) << nl;
    cout << n << "th Fibonacci number is: " << fibUsingForLoop(n) << nl;

    return 0;
}