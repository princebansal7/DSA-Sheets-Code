#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//-----WAY-1------------------------

void factors1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << nl;
}

//-------WAY-2 TC: O(sqrt(N))------------------------

void factors2(int n)
{
    /*              way-1

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
                if (i != n / i)
                {
                    cout << n / i << " ";
                }
            }
        }
    */

    //          way-2

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                cout << i << " ";
            else
                cout << i << " " << n / i << " ";
        }
    }
    cout << nl;
}

int main()
{
    int n;
    cin >> n;

    cout << "Factors of " << n << " are:" << nl;
    factors1(n);
    factors2(n);
    return 0;
}