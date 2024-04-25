#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// Pairing of 3-3 will do:
// eg: 101111
//     using 421 rule

//         101 111
//         --- ---
//          5   7            =>  (101111)2 = (57)8
// 4*1+2*0+1*1  4*1+2*1+1*1

void binaryToOctal(string &s)
{
    int n = s.length();

    // appending 0 according to length if pairs of 3-3 isn't completed
    if (n % 3 == 1)
    {
        s = "00" + s;
    }
    else if (n % 3 == 2)
    {
        s = '0' + s;
    }
    string ans = "";
    for (int i = 0; i < n; i += 3)
    {
        int temp = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1;
        ans += (temp + '0');
    }
    cout << ans << nl;
}

int main()
{
    string s;
    cin >> s;

    binaryToOctal(s);

    return 0;
}
