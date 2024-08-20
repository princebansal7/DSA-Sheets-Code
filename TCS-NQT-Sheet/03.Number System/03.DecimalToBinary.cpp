#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//--------WAY-1---------------------------

void decimalToBinary1(int n)
{
    bool bits[32] = {0};

    int index = 0;
    while (n)
    {
        bits[index] = n % 2;
        index++;
        n /= 2;
    }
    for (int i = index - 1; i >= 0; i--)
        cout << bits[i];
    cout << nl;
}

// ----WAY-2 (Space optimised)----------------

void decimalToBinary2(int n)
{
    bool ok = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((n >> i) & 1)
        {
            ok = 1;
            cout << 1;
        }
        else
        {
            if (ok == 1)
                cout << 0;
        }
    }
    cout << nl;
}

int main()
{
    int n;
    cin >> n;

    decimalToBinary1(n);

    decimalToBinary2(n);

    return 0;
}