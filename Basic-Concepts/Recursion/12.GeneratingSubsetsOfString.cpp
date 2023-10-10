/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// All characters in input string will be distinct
// i/p: s = "AB"
// o/p: "", "A", "B", "AB"
// => for string of length n, there will be 2^n subsets

// This problem can be considered same as generating all the Subsequences of String
// Subsequence: it is obtained by removing 0 or more characters from the given string
//              and keeping the order of remaining characters same.

void generateSubsets(string s, string curr = "", int i = 0)
{
    if (i == s.size()) {
        cout << curr << nl;
        return;
    }

    generateSubsets(s, curr, i + 1);
    generateSubsets(s, curr + s[i], i + 1);
}

int main()
{
    string s;
    cin >> s;

    generateSubsets(s);

    return 0;
}