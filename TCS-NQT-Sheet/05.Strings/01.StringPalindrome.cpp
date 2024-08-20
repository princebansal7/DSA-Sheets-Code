#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

bool isPalindrome1(string &s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

bool isPalindrome2(string &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;

    bool ans;
    // ans = isPalindrome1(s);

    ans = isPalindrome2(s);

    if (ans)
        cout << "Palindrome" << nl;
    else
        cout << "Not Palindrome" << nl;
    return 0;
}