#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

/*
    A number is called an Automorphic number if and only if
    its square ends in the same digits as the number itself.
    eg: 25, 76,.....

        as (25)^2 = 625
           (76)^2 = 5776
*/

/*--------WAY-1---------------------------------------------------

int countDigits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
int reverseNum(int n)
{
    int reversed_num = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reversed_num = reversed_num * 10 + lastDigit;
        n = n / 10;
    }
    return reversed_num;
}
bool isAutomorphic(int n)
{
    int digitCount = countDigits(n);
    int sq = pow(n, 2);
    int newNum = 0;
    while (digitCount--) // extracting last digits of number till number of time original num had digits
    {
        int ld = sq % 10;
        newNum = newNum * 10 + ld; // we get reversed number, we have to reverse it to check as per conditions
        sq = sq / 10;
    }

    int newReverseNum = reverseNum(newNum); // reversing the number to get required last digit number

    if (n == newReverseNum) // checking condition (originNumber == lastDigitNumber)
        return true;
    return false;
}
-------------------------------------------------------------------------------------------------------*/

//--------WAY-2 (Short Way)------------------------------------------------

bool isAutomorphic2(int n)
{

    int sq = n * n;

    while (n > 0)
    {
        // Check if last digit is equal or not

        if ((n % 10) != (sq % 10))
            return false;

        // Reducing the number and its square

        n /= 10;
        sq /= 10;
    }

    return true;
}
int main()
{
    int n;
    cin >> n;

    if (isAutomorphic2(n))
        cout << n << " is Automorphic number" << nl;
    else
        cout << n << " is not Automorphic number" << nl;
    return 0;
}