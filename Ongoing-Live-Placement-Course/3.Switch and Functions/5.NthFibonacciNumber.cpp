#include<iostream>
using namespace std;

void printFibonaccisequence(int n) {
    int a = 0, b = 1;
    int sum = 0;
    cout << "Fibonacci sequence upto " << n << " term is: \n";
    cout << a << " " << b << " ";
    for (int i = 1; i <= n - 2; ++i)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    cout << "\n\n";
}

int NthFibonacci(int n) {
    int a = 0, b = 1;
    int sum = 0;

    if (n == 1)
        return a;
    if (n == 2)
        return b;
    for (int i = 1; i <= n - 2; ++i)
    {
        sum = a + b;
        a = b;
        b = sum;
    }

    return sum;
}

int main()
{

    int n; cin >> n;
    printFibonaccisequence(n);
    int ans = NthFibonacci(n);
    cout << n << "th Fibonacci number is: " << ans;
    return 0;
}