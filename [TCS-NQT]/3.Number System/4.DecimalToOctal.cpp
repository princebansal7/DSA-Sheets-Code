#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

//--------WAY-1, TC: O(log N)---------------------------

void decimalToOctal1(int n)
{
    int octalDigits[32] = {0};
    int index = 0;
    while (n)
    {
        octalDigits[index] = n % 8;
        index++;
        n /= 8;
    }
    for (int i = index - 1; i >= 0; i--)
        cout << octalDigits[i];
    cout << nl;
}

// ----WAY-2 (Space optimised)----------------

void decimalToOctal2(int n)
{
    int Octal = 0;
    int i = 0;
    while (n != 0)
    {
        int rem = n % 8;
        Octal += rem * pow(10, i);
        i++;
        n = n / 8;
    }
    cout << Octal << nl;
}

int main()
{
    int n;
    cin >> n;

    decimalToOctal1(n);

    decimalToOctal2(n);

    return 0;
}