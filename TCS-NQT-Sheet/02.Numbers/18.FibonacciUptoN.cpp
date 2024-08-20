#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*

Fibonacci seq: (we will do 0 based indexing )
    0 1 1 2 3 5 8 13 21 34 55 89 144 . . . .

*/

//--------WAY-1 TC: O(n) + O(n), SC: O(n)-------------------------------------------

void PrintFib1(int n)
{

    if (n == 0)
        cout << 0 << nl;
    else if (n == 1)
        cout << 0 << " " << 1 << nl;
    else
    {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        for (int i = 0; i <= n; i++)
            cout << fib[i] << " ";
    }
    cout << nl;
}

//-------WAY-2 (Optimised), TC: O(n), SC: O(1)--------------------------------

void PrintFib2(int n)
{
    if (n == 0)
    {
        cout << 0 << nl;
        return;
    }

    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";
    for (int i = 2; i <= n; i++)
    {
        int next = first + second;
        cout << next << " ";

        first = second;
        second = next;
    }
    cout << nl;
}

int main()
{

    int n;
    cin >> n;

    cout << "Fibonacci till " << n << "th term (0-based indexing):" << nl;

    PrintFib1(n);

    PrintFib2(n);

    return 0;
}