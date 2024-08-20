#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// TC: O(log N)

void getSumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;
    }
    cout << "Sum of Digits is: " << sum << nl;
}

int main()
{
    int n;
    cin >> n;

    getSumOfDigits(n);

    return 0;
}