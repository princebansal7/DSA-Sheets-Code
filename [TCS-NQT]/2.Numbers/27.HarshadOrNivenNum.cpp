#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*                          harshad or Niven Number:

    A number is said to be the Harshad or Niven number if it is divisible by the sum of its digit.
    For example, if number is 156, then sum of its digit will be 1 + 5 + 6 = 12.
    Since 156 is divisible by 12. So, 156 is a Harshad number.
    eg: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 18, 20, 21, 24, 27, 30, 36, 40, 42,
        45, 48, 50, 54, 60, 63, 70, 72, 80, 81, 84, 90, 100, 102, 108, 110, 111, 112,
        114, 117, 120, 126, 132, 133, 135, 140, 144, 150, 152, 153, 156, 162, 171, 180, 190, 192....
*/
// TC: O(N) for both methods

// -------------WAY-1 -------------------------------

int getSumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;
    }
    return sum;
}

bool isHarshad1(int n)
{
    if (n % getSumOfDigits(n) == 0)
        return true;
    return false;
}

// ------WAY-2 (Using Strings)------------------------

bool isHarshad2(int n)
{
    string s = to_string(n);
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
    }
    if (n % sum == 0)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    bool ans;

    // ans = isHarshad1(n);
    ans = isHarshad2(n);

    if (ans)
        cout << n << " Harshad Number" << nl;
    else
        cout << n << " Not Harshad number" << nl;

    return 0;
}