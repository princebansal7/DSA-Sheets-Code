/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//-----way-1 (TC: O(n), SC: O(n))-------------------

void changingToNextLexAlphabet1(string &s)
{
    string ans = "";
    for (char ch : s)
    {
        if (ch == 'z')
            ans += 'a';
        else if (ch == 'Z')
            ans += 'A';
        else
            ans += (++ch);
    }
    cout << ans << nl;
}

//-----way-1 (TC: O(n), SC: O(1))--------------------

void changingToNextLexAlphabet2(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'z')
            s[i] = 'a';
        else if (s[i] == 'Z')
            s[i] = 'A';
        else
            s[i] = (++s[i]);
    }
    cout << s << nl;
}

int main()
{
    string s;
    cin >> s;

    changingToNextLexAlphabet1(s);

    changingToNextLexAlphabet2(s);

    return 0;
}