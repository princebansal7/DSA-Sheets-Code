#include <iostream>
#include <algorithm>
using namespace std;
#define nl "\n"
#define ll long long

//-------WAY-1--------------------------

char MAxOcc1(string &s)
{
    int n = s.size();
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    int max = -1;
    char ans;
    for (auto val : m)
    {
        if (max < val.second)
        {
            max = val.second;
            ans = val.first;
        }
    }

    return ans;
}

//-------WAY-1.1--------------------------

char MaxOcc2(string &s)
{
    char ans;
    int maxfreq = 0, n = s.length();
    int freq[256] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
        if (maxfreq < freq[s[i]])
        {
            maxfreq = freq[s[i]];
            ans = s[i];
        }
    }
    return ans;
}

//-----------------WAY-2------------------------

int main()
{
    string s;
    cin >> s;

    char ans;
    ans = MAxOcc1(s);
    // ans = MaxOcc2(s);
    cout << "Maximum Occuring character in " << s << " is: " << ans << nl;

    return 0;
}