#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

/*
    Given two strings s1 and s2, return true if s2 contains a
    permutation of s1, or false otherwise.
*/

bool checkEqual(int a[], int b[])
{
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{

    int count1[26] = { 0 };

    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int windowSize = s1.length();
    int i = 0;
    int count2[26] = { 0 };

    while (i < windowSize && i < s2.length()) {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
        return true;

    while (i < s2.length()) {

        char newChar = s2[i];
        int index1 = newChar - 'a';
        count2[index1]++;

        char oldChar = s2[i - windowSize];
        int index2 = oldChar - 'a';
        count2[index2]--;

        i++;

        if (checkEqual(count1, count2))
            return true;
    }
    return false;
}

int main()
{
    fast_io

        string s1,
        s2;
    cin >> s1 >> s2;

    if (checkInclusion(s1, s2))
        cout << "true" << nl;
    else
        cout << "false" << nl;

    return 0;
}