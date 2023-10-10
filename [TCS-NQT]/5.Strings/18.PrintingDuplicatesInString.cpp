/*
    @author: princebansal_

*/

#include <iostream>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long

//------------WAY-1------------------------------

void printDup1(string &s)
{
    string ans = "";
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 1)
        {
            cout << (char)(i + 'a') << " : " << freq[i] << nl;
        }
    }
}

//----------------WAY-2------------------------

void printDup2(string &s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    for (auto ch : m)
    {
        if (ch.second > 1)
        {
            cout << ch.first << " : " << ch.second << nl;
        }
    }
}

int main()
{
    string s;
    cin >> s;

    // printDup1(s);

    printDup2(s);

    return 0;
}