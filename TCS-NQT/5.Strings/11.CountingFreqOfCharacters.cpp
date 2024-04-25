#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long

//----------WAY-1------------------------------------

void CountFreq1(string &str)
{
    sort(str.begin(), str.end());
    char ch = str[0];
    int count = 1;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == ch)
            count++;
        else
        {
            cout << ch << " -> " << count << nl;
            count = 1;
            ch = str[i];
        }
    }
    cout << ch << " -> " << count << nl;
}

//----------WAY-2------------------------------------

void CountFreq2(string &s)
{
    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            cout << (char)(i + 'a') << " -> " << freq[i] << nl;
    }
    cout << nl;
}

//------WAY-3-----------------------------------------

void CountFreq3(string &s)
{
    unordered_map<char, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (auto val : mp)
    {
        cout << val.first << " -> " << val.second << nl;
    }
    cout << nl;
}
int main()
{
    string s;
    cin >> s;

    CountFreq1(s);
    // CountFreq2(s);
    // CountFreq3(s);
    return 0;
}