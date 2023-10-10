#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

bool CheckEven1(int n)
{
    if (n % 2 == 0)
        return true;
    return false;
}

// Using BitWise operator

bool CheckEven2(int n)
{
    if (n & 1)
        return false;
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (CheckEven2(n))
        cout << n << " is Even Number" << nl;
    else
        cout << n << " is Odd Number" << nl;

    return 0;
}