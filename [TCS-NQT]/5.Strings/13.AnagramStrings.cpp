#include <iostream>
#include <algorithm>
using namespace std;
#define nl "\n"
#define ll long long

//-------WAY-1---------------------------

// Approach : Sort both the string and compare each and every letter of both strings.
// If all letters matched then, print true.Otherwise, print false.
bool checkAnagram1(string &s1, string &s2)
{
    int n = s1.size(), m = s2.size();
    if (n != m)
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

//-------WAY-2---------------------------

// Approach : Just count the frequency of every element in Str1 and
// iterate through Str2 and decrease the count of every element in the frequency array.
// Now iterate again, if the frequency at any point is not 0 this means,
// strings are not anagrams of each other.

bool checkAnagram2(string &s1, string &s2)
{
    int n = s1.size(), m = s2.size();
    if (n != m)
        return false;
    unordered_map<char, int> m1;
    for (int i = 0; i < n; i++)
    {
        m1[s1[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        m1[s2[i]]--;
    }

    for (auto ch : m1)
    {
        if (ch.second != 0)
            return false;
    }
    return true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    bool ans;

    // ans = checkAnagram1(s1, s2);

    ans = checkAnagram2(s1, s2);

    if (ans)
        cout << "Anagram!!" << nl;
    else
        cout << "Not Anagram!!" << nl;
    return 0;
}