#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*
      eg: s = "Hello12% *&Hi ^$#World"
      Characters 1,2,%,*,&,^,$,# along with whitespaces should be removed
      removed but the order of remaining alphabets is preserved.
      => O/P: HelloHiWorld
*/

void removeCharacters(string &s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' and s[i] <= 'z') || (s[i] >= 'A' and s[i] <= 'Z'))
            ans += s[i];
    }
    cout << ans << nl;
}

int main()
{
    string s;
    getline(cin, s);

    removeCharacters(s);

    return 0;
}