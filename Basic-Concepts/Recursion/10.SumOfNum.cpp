/*
    @author: princebansal_
*/

// TC: theta(N+1),  SC: theta(N+1), where N is number of digits in number

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long

int sumOfDigits1(int n)
{
    if (n == 0) {
        return 0;
    }
    int lastDigit = n % 10;
    return sumOfDigits1(n / 10) + lastDigit;
}

// Slightly Improving complexity by modifying base case
// we we'll stop when there is only single digit remains
// but prefer iterative solution for simple solution

// TC: theta(N),  SC: theta(N), where N is number of digits in number
int sumOfDigits2(int n)
{
    if (n <= 9) {
        return n;
    }
    int lastDigit = n % 10;
    return sumOfDigits2(n / 10) + lastDigit;
}

int main()
{
    int n;
    cin >> n;

    cout << sumOfDigits1(n) << nl;
    cout << sumOfDigits2(n) << nl;

    return 0;
}