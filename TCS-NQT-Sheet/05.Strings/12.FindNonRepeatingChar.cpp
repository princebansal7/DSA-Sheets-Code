#include <iostream>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long

// ------WAY-1----------------------------------

void findNonRep1(string &s)
{
    int freq[200] = {0};
    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        freq[i] = 1;
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] == s[j])
            {
                freq[i]++;
                s[j] = '-'; // set s[j] to - to avoid visited character
            }
        }
    }

    for (int i = 0; i < l; ++i)
    {
        if (freq[i] == 1 && s[i] != ' ' && s[i] != '-')
        {
            cout << s[i] << " ";
        }
    }
    cout << nl;
}

//-------------------WAY-2--------------------------------

void findNonRep2(string &s)
{

    int n = s.length();
    int freq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
            cout << (char)(i + 'a') << " ";
    }
    cout << nl;
}

//-------WAy-3-----------------------------------------

void findNonRep3(string &s)
{

    int n = s.length();
    unordered_map<char, int> mp;
    for (char ch : s)
        mp[ch]++;

    for (auto val : mp)
    {
        if (val.second == 1)
            cout << val.first << " ";
    }
    cout << nl;
}

int main()
{
    string s;
    cin >> s;

    // findNonRep1(s);

    // findNonRep2(s);

    findNonRep3(s);

    return 0;
}