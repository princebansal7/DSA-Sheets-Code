#include<bits/stdc++.h>
using namespace std;


void DuplicatesInString(string &s)
{
    // Hashing Solution

    unordered_map<char, int> mp;

    int n = s.length();
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    for (auto x : mp) {
        if (x.second > 1)
            cout << x.first << " " << x.second << endl;
    }
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    string s;

    getline(cin, s);

    DuplicatesInString(s);

    return 0;
}