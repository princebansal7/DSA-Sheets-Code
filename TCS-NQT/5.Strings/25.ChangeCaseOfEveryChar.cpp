/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// -------------WAY-1------------------------------

void changeCase1(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
        else if (s[i] >= 'A' and s[i] <= 'z')
            s[i] = s[i] - 'A' + 'a';
    }
    cout << s << nl;
}

//------------ WAY-2 (builtin function)---------

void changeCase2(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            s[i] = towupper(s[i]);
        else if (s[i] >= 'A' and s[i] <= 'z')
            s[i] = towlower(s[i]);
    }
    cout << s << nl;
}

int main()
{
    string s;
    getline(cin, s);

    changeCase1(s);

    changeCase2(s);

    return 0;
}