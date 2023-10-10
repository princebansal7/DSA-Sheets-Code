#include <iostream>
#include <cctype>
using namespace std;
#define nl "\n"
#define ll long long

/*
        Calculating the sum of numbers in a string
        (multiple consecutive digits are considered one number)
        Example 1:
        Input: string = “123xyz”
        Output: 123

        Example 2:
        Input: string = “1xyz23”
        Output: 24
*/

int getSum(string &s)
{
    int sum = 0;
    string temp;

    for (char ch : s)
    {
        if (isdigit(ch)) // if(st[i] >= '0' && st[i] <= '9')
        {
            // isdigit() checks whether that character is digit or not
            temp += ch; // temp will only contains continuous interger part of string only
        }
        else
        {
            // atoi() => converts string to integer
            // to_string => converts integer to string (commonly used)
            sum += atoi(temp.c_str()); // c_str() converts c++ string to c style string
            temp = "";
        }
    }
    // after the loop end, if string is like: 123Xu10xz25,
    // 25 is stored in temp, but didn't get added, so we have to add it,  (if exist)

    sum += atoi(temp.c_str());
    return sum;
}

int main()
{
    string s;
    getline(cin, s);

    int ans = getSum(s);
    cout << "Sum is: " << ans << nl;

    return 0;
}