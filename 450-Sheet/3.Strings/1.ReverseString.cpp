#include <bits/stdc++.h>
using namespace std;

void reverseString(string& s)
{

    //___________WAY-1________________

    int n = s.length();
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        swap(s[i], s[j]);
    }

    /*______________WAY-2___________

    reverse(s.begin(), s.end()); // using inbuilt function

    __________________________________*/
}

int main()
{
    string s;

    getline(cin, s);

    reverseString(s);

    cout << s;

    return 0;
}