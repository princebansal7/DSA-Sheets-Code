/*
    @author: princebansal_
*/

#include <cmath>
#include <iostream>
using namespace std;
#define nl '\n'

// TC: log10(n) => whenever there is division by 10 or 2 or 3 TCs will be log10 or log2 or log3 respectively

int countDigits1(int n)
{
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n = n / 10;
    }
    return cnt;
}

int countDigits2(int n)
{
    return (int)(log10(n) + 1);
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    // int ans = countDigits1(n);
    int ans = countDigits2(n);
    cout << ans << nl;
    return 0;
}