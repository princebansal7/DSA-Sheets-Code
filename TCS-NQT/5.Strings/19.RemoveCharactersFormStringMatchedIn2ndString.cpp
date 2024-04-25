/*
    @author: princebansal_
*/

#include <iostream>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long
/*
Example 1 : Input : String str1 = “abcdef”
                    String str2 = “cefz”
            Output : abd
 Explanation : The common characters in both strings are c,e,f.
 So after removing these characters from string 1 we get string resulting string as abd.
*/

//--------WAY-1 (Partially Correct)--------------------------------------------------

void removeCharacerFrom1stMatchedin2nd1(string &s1, string &s2)
{
    string ans = "";

    int n = s1.size(), m = s2.size();
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (s1[i] != s2[j])
        {
            ans += s1[i];
            i++;
        }
        else if (s1[i] == s2[j])
        {
            j++;
            i++;
        }
    }

    cout << ans << nl;
}

//-----------WAY-2--------------------------------------

void removeCharacerFrom1stMatchedin2nd2(string &s1, string &s2)
{
    string ans = "";

    for (int i = 0; i < s1.size(); i++)
    {
        bool ok = false;
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
                ok = true;
        }
        if (ok == false)
            ans += s1[i];
    }
    cout << ans << nl;
}

//-----------WAY-3 (Optimised)--------------------------------------

void removeCharacerFrom1stMatchedin2nd3(string &s1, string &s2)
{
    string ans = "";
    unordered_map<char, int> m;

    for (int i = 0; i < s2.size(); i++)
    {
        m[s2[i]] = 1;
    }

    for (int i = 0; i < s1.size(); i++)
    {
        if (m[s1[i]] != 1)
            ans += s1[i];
    }

    cout << ans << nl;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    removeCharacerFrom1stMatchedin2nd1(s1, s2); // partially correct

    removeCharacerFrom1stMatchedin2nd2(s1, s2); // Correct

    removeCharacerFrom1stMatchedin2nd3(s1, s2); // optimised & correct

    return 0;
}