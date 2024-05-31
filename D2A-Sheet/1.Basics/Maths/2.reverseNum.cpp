/*
    @author: princebansal_
*/

#include <climits>
#include <iostream>
using namespace std;
#define nl '\n'

// leetcode: https://leetcode.com/problems/reverse-integer/
int reverse(int n)
{
    int rev = 0;
    while (n != 0) {
        int ld = n % 10;
        if ((rev < INT_MIN / 10) || (rev > INT_MAX / 10)) {
            return 0;
        }
        rev = ld + rev * 10;
        n = n / 10;
    }
    return rev;
}

int reverse1(int n)
{
    int rev = 0;
    while (n) {
        int pop = n % 10;
        rev = rev * 10 + pop;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    int ans = reverse1(n);
    cout << ans << nl;

    return 0;
}