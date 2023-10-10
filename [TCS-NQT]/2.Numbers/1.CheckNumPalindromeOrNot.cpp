#include <iostream>
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
    // cout << "reverse is: " << reverseNum << nl;
    if (temp == reverseNum)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    bool ans;
    ans = isPalindrome(n);
    if (ans)
        cout << "Yes, " << n << " is a Palindrome" << nl;
    else
        cout << "No, " << n << " is Not a Palindrome" << nl;
    return 0;
}