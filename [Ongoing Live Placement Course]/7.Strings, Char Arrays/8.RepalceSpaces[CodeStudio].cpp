#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

//_____Way-1_____SC: O(|s|)_____________________________

string ReplaceSpaces1(string &str) {

    string s;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            s += str[i];
        }
        else {
            s + "@40";

            /*     Or

                s.push_back('@');
                s.push_back('4');
                s.push_back('0');

            */
        }
    }
    return s;
}
//_______WAY-2__________________________________________


string ReplaceSpaces2(string &str) {

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {

            str.replace(i, 1, "@40"); // replace(pos,len,string2)

        }
    }
    return str;
}


int main()
{

    fast_io
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    string str, ans;

    getline(cin, str);

    // replaces ' ' with "@40"
    // eg: Hello World => Hello@40World

    ans = ReplaceSpaces1(str);
    cout << ans << nl;
    return 0;
}