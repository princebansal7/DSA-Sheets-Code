#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s)
{
    /*____WAY-1__________TC:O(n), SC: O(n)__________________

    string temp = s;

    int n = s.length();
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        swap(s[i], s[j]);
    }
    if (s == temp)
        return 1;
    return 0;

    ________________________________________________________*/

    /*_____________WAY-2__TC: O(n), SC:O(1)_________________

    int start = 0, end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            return 0;
        }
        else {
            start++;
            end--;
        }
    }

    /*
        We can Directly write as:

            while (start < end) {
                if (s[start++] != s[end--]) {
                    return 0;
                }
            }
            return 1;

    ____________________________________________________________*/

    //________Fastest Way (Use this function in CP)____________

    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1])
            return 0;
    }

    return 1;
}

int main()
{
    string s;

    getline(cin, s);

    bool res = isPalindrome(s);

    if (res)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}