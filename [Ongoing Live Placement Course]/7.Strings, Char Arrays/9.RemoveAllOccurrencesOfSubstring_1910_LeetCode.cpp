#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

//_______WAY-1 (Using string functions)_________________________

string removeOccurrences(string s, string part)
{

    while (s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    fast_io

        string s,
        part;
    cin >> s >> part;

    string ans = removeOccurrences(s, part);

    cout << ans << nl;

    return 0;
}