#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"


bool check(string &temp) {

    int start = 0, end = temp.length() - 1;

    while (start < end) {
        if (temp[start++] != temp[end--])
            return 0;
    }
    return 1;
}

bool isPalindrome(string s) {

    if (s == " ")
        return true;

    string temp;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if ((ch >= 'A' and s[i] <= 'Z')) {
            ch = ch - 'A' + 'a';
            temp.push_back(ch);
        }
        else if (ch >= 'a' and s[i] <= 'z') {
            temp.push_back(ch);
        }
        else if (ch >= '0' and s[i] <= '9') {
            temp.push_back(ch);
        }
    }
    return check(temp);
}


int main()
{

    fast_io
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    string s;

    getline(cin, s);  // for string input with spaces

    if (isPalindrome(s))
        cout << "true" << nl;
    else
        cout << "false" << nl;

    return 0;
}


/*__________WAY-2______________________________________________________


bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }

    return 0;
}

char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
bool isPalindrome(string s) {
    string temp = "";

    for(int j=0; j<s.length(); j++) {
        if(valid(s[j])) {
            temp.push_back(s[j]);
        }
    }

    //lowercase me kardo
    for(int j=0; j<temp.length(); j++) {
        temp[j] = toLowerCase(temp[j]);
    }

    //check palindrome
    return checkPalindrome(temp);
}

*/