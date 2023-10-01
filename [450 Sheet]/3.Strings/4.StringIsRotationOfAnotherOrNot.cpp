#include <bits/stdc++.h>
using namespace std;

bool CheckRotation(string& s1, string& s2)
{

    // checking whether s2 string is rotation of s1 string or not

    if (s1.length() != s2.length()) // Agar length hi same nhi toh kaeka rotation
        return false;

    string temp = s1 + s1;

    unsigned int res = temp.find(s2); // gives index of 1st occurence of string s2 in new temp string

    if (res == string::npos) { // if not found then, find() returns a constant called 'string::npos'
        return false;
    }
    return true;
}

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    if (CheckRotation(s1, s2)) {
        cout << "Yes " << s2 << " is rotation of " << s1;
    } else
        cout << "No, " << s2 << " is not rotation of " << s1;

    return 0;
}