#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

string removeAdjacentDup(string s)
{

    string ans;
    for (char ch : s) {
        if (ans.length() != 0 && ans.back() == ch)
            ans.pop_back();
        else
            ans.push_back(ch);
    }
    return ans;
}

int main()
{
    fast_io

        string s;
    cin >> s;

    cout << removeAdjacentDup(s) << nl;

    return 0;
}