#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//----------WAY-1---------------------------------------------

void removeVowels1(string &s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            ans += s[i];
        }
    }
    cout << "After Removing Whitespaces: " << nl;
    cout << ans << nl;
}

// ----------WAY-2 (Space Optimised)-----------------------------------

void removeVowels2(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s = s.substr(0, i) + s.substr(i + 1);
            i--;
        }
    }
    cout << "After Removing Whitespaces: " << nl;
    cout << s << nl;
}

int main()
{
    string s;
    getline(cin, s);

    removeVowels1(s);
    removeVowels2(s);

    return 0;
}