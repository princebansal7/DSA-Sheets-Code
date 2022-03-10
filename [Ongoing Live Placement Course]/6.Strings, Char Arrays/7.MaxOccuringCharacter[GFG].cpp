#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

/*_______________ Way-1___________________________________________________

char MaxOcc(string str) {

    int a[26] = {0};
    int n;
    for (int i = 0; i < str.length(); i++) {

        n=str[i]-'a';
        a[n]++;
    }
    int max = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (max < a[i]) {
            max = a[i];
            ans = i;
        }
    }
    return ans + 'a';
}
_____________________________________________________________________*/

//___________Using Map______________________________________________

// works for both upper and lower case characters

char MaxOcc(string str)
{
    map<char, int> mp;

    for (int i = 0; i < str.length(); i++) {
        mp[str[i]]++;
    }

    int maxi = -1;

    char letter;

    for (auto x : mp) {

        if (x.second > maxi) {

            maxi = x.second;
            letter = x.first;
        }
    }
    return letter;
}

int main()
{

    fast_io
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    string s; cin >> s;

    char ans = MaxOcc(s);

    cout << "Max Occuring Character is: " << ans << nl;


    return 0;
}