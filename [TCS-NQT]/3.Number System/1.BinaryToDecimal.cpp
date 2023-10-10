#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

// WAY-1 (Understanding way)-------------------------------
int binaryToDecimal1(string s)
{
    int ans = 0;
    int index = s.size() - 1;
    for (int i = index, place = 0; i >= 0; i--, place++)
    {
        int bit = s[i] - '0';
        if (bit == 1)
            ans = ans + pow(2, place);
    }
    return ans;
}

// WAY-2 (Without using pow() )---------------------------------------------------------

int binaryToDecimal2(string s)
{
    int ans = 0;
    int index = s.size() - 1;
    int base = 1;
    for (int i = index; i >= 0; i--)
    {
        int bit = s[i] - '0';
        if (bit == 1)
            ans = ans + base;
        base *= 2;
    }
    return ans;
}
// WAY-3 (using pre-defined function)------------------------

int binaryToDecimal3(string s)
{
    return stoi(s, 0, 2);
}

int main()
{
    string s;
    cin >> s;

    int ans;
    // ans = binaryToDecimal1(s);
    // ans = binaryToDecimal2(s);
    ans = binaryToDecimal3(s);

    cout << s << " -> " << ans << nl;
    return 0;
}