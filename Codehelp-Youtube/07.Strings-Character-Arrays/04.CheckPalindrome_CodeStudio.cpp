#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

bool check(string& temp)
{

    int start = 0, end = temp.length() - 1;

    while (start < end) {
        if (temp[start++] != temp[end--])
            return 0;
    }
    return 1;
}

bool isPalindrome(string s)
{

    if (s == " ")
        return true;

    string temp;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if ((ch >= 'A' and s[i] <= 'Z')) {
            ch = ch - 'A' + 'a';
            temp.push_back(ch);
        } else if (ch >= 'a' and s[i] <= 'z') {
            temp.push_back(ch);
        } else if (ch >= '0' and s[i] <= '9') {
            temp.push_back(ch);
        }
    }
    return check(temp);
}

int main()
{
    string s;

    getline(cin, s); // for string input with spaces

    if (isPalindrome(s))
        cout << "true" << nl;
    else
        cout << "false" << nl;

    return 0;
}