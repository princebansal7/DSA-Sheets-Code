#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

int getLength(char str[]) {

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool isPalindrome1(char str[], int n) {   // Case-Sensitive (basic)
    int s = 0, e = n - 1;

    while (s < e) {
        if (str[s++] != str[e--])
            return false;
    }
    return true;
}

char toLowerCase(char ch) {

    char ans;
    if (ch >= 'A' && ch <= 'Z')  // if uppercase character => making it lowercase
        ans = ch - 'A' + 'a';
    else                        // => already Lowercase
        ans = ch;

    return ans;
}

bool isPalindrome2(char str[], int n) {   // Case - Insensitive (variation-1)
    int s = 0, e = n - 1;

    while (s < e) {
        if (toLowerCase(str[s]) != toLowerCase(str[e]))
            return false;
        else {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{

    fast_io
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif


    int length;

    char str[50];

    cin >> str;

    length = getLength(str);



    cout << "Palindrome [Case-Sensitive]: ";

    if (isPalindrome1(str, length))
        cout << "true" << nl;
    else
        cout << "false" << nl;



    cout << "Palindrome [Case-InSensitive]: ";

    if (isPalindrome2(str, length))
        cout << "true" << nl;
    else
        cout << "false" << nl;

    return 0;
}