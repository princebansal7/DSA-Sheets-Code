/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int temp = x;
    int rev = 0;
    while (x) {
        int ld = x % 10;
        rev = rev * 10 + ld;
        cout << rev << nl;
        x /= 10;
    }
    if (temp == rev)
        return true;
    return false;
}

// leetcode: https://leetcode.com/problems/palindrome-number/

bool isPalindrome2(int x)
{
    int temp = x;
    if (x < 0)
        return 0;

    int rem;
    int ans = 0;
    while (x) {
        rem = x % 10;
        if (ans > INT_MAX / 10)
            return 0;
        ans = ans * 10 + rem;
        x /= 10;
    }
    if (ans == temp)
        return 1;
    return 0;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    bool ans = isPalindrome(n);

    (ans) ? cout << "Palindrome number" << nl : cout << "Not a Palindrome number" << nl;

    return 0;
}