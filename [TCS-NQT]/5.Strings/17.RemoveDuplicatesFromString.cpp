/*
    @author: princebansal_

*/

#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

//------WAY-1-------------------------------------------

void removeDup1(string &s)
{
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (s[i] == s[j])
                break;
        }
        if (i == j)
        {
            ans += s[i];
        }
    }
    cout << ans << nl;
}

//------------WAY-2 (optimised)------------------------------

void removeDup2(string &s)
{
    string ans = "";
    vector<bool> check(26, false);
    for (int i = 0; i < s.size(); i++)
    {
        if (check[s[i] - 'a'] == false)
        {
            ans += s[i];
            check[s[i] - 'a'] = true;
        }
    }
    cout << ans << nl;
}

int main()
{
    string s;
    cin >> s;

    // removeDup1(s);

    removeDup2(s);

    return 0;
}