/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

bool isPal(string& s, int start, int end)
{
    if (start >= end)
        return true;

    return s[start] == s[end] && isPal(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;

    bool ok = isPal(s, 0, s.size() - 1);

    if (ok)
        cout << "Palindrome" << nl;
    else
        cout << "Not Palindrome" << nl;

    return 0;
}