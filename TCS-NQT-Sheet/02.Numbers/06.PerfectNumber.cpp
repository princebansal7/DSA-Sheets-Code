
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*
    A perfect number is defined as a number that is the sum of its proper divisors
    ( all its positive divisors excluding itself).

    Exapmle: 6 , the sum of their proper divisors (1+2+3) = 6 => equal to its respective number
             28, the sum of their proper divisors (1+4+7+14)  = 26 => is not equal to its respective number.
    others are: 496,8128, 33550336....
*/

/*------WAY-1 TC: O(n)-------------------------------------

bool isPerfectNum1(int n)
{
    int divisorSum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            divisorSum += i;
    }
    if (divisorSum == n)
        return true;
    return false;
}
--------------------------------------------------*/

//----------WAY-2 , TC: O(sqrt(n)) (Efficient way , prime like logic)--------------------------------

bool isPerfectNum2(int n)
{
    int divisorSum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n || i == 1) // as we have to calculate divisor's sum one time only
            {
                divisorSum += i;
            }
            else
            {
                divisorSum += (i + n / i); // n/i is that divisor, jo sqrt(number) se agey hai
            }
        }
    }
    cout << divisorSum << nl;

    if (divisorSum == n)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    if (isPerfectNum2(n))
        cout << n << " is a Perfect Number" << nl;
    else
        cout << n << " is Not a Perfect Number" << nl;

    return 0;
}