#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*
      eg: s = "a+((b-c)+d)"

      => O/P: a+b-c+d
*/

void removeBrackets(string &s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '(' and s[i] != ')')
            ans += s[i];
    }
    cout << ans << nl;
}

int main()
{
    string s;
    getline(cin, s);

    removeBrackets(s);

    return 0;
}