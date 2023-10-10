#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*
                    Abundant Number:

        if sum of all proper factors (all factors except the number itself) of a number is
        greater than the number itself, then that number is called Abundant Number.
        eg: 18 => Proper factors: 1,2,3,6,9
                 1+2+3+6+9 = 21 => 21>18 => 18 is abundant number

        eg: 21 => Proper factors: 1,3,7
                 1+3+7 = 11 => 11<21 => 21 is not abundant number
*/

// WAY-1------------------------------------------------------

bool isAbundant1(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << nl;
    cout << "Sum of Proper factors is " << sum << nl;
    if (sum > n)
        return true;
    return false;
}

// WAY-2------------------------------------------------------

bool isAbundant2(int n)
{
    int sum = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                sum += i;
            else
                sum += (i + (n / i));
        }
    }
    sum -= n; // subtracting the number itself (as it's not come under proper factor)
    cout << nl;
    cout << "Sum of Proper factors is " << sum << nl;
    if (sum > n)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    bool ans;

    ans = isAbundant1(n);

    if (ans)
        cout << n << " is a Abundant number" << nl;
    else
        cout << n << " is not a Abundant number" << nl;

    return 0;
}