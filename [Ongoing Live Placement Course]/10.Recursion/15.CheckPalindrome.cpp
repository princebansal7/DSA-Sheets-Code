#include <iostream>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

// Way 1: Using Two Pointers
bool isPalindrome1(string &s, int i, int j)
{

    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    return isPalindrome1(s, i + 1, j - 1);

    /*-------- Way-2------------------------
    if (s[i] != s[j])
        return false;
    if (s[i] == s[j])
        return true;
    return isPalindrome(s, i + 1, j - 1);
    ----------------------------------------*/
}

// Way-2: Using One Pointer
bool isPalindrome2(string &s, int i, int size)
{
    // Doesn't work for Even size string (Correction required)
    if (i > size / 2)
        return false;

    if (s[i] == s[size - 1])
    {
        i++;
        size = size - i - 1;
        return isPalindrome2(s, i, size);
    }
}

int main()
{
    string s;
    cin >> s;
    int size = s.length();
    int i = 0, j = s.size() - 1;

    bool ans;
    // ans = isPalindrome1(s, i, j);
    ans = isPalindrome2(s, i, size);

    if (ans)
        cout << "Palindrome!!" << nl;
    else
        cout << "Not Palindrome!!" << nl;
    return 0;
}