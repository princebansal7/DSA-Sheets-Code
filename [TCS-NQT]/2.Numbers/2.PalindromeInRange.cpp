#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

bool isPalindrome(int n)
{
    int temp = n;
    int reverseNum = 0;
    while (n > 0)
    {
        int LastDigit = n % 10;
        reverseNum = reverseNum * 10 + LastDigit;
        n = n / 10;
    }
    if (temp == reverseNum)
        return true;
    return false;
}

int main()
{
    int min, max;
    cin >> min >> max;

    cout << "Palindromes between " << min << " and " << max << " are:" << nl;
    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i))
            cout << i << " ";
    }
    cout << nl;
    return 0;
}