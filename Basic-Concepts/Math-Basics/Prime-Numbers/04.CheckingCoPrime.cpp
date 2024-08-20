#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

bool IsCoPrime(int a, int b) {

    int cnt = 0;
    int val = min(a, b);

    for (int i = 1; i <= val; i++)
        if (a % i == 0 && b % i == 0)
            cnt++;

    if (cnt == 1)
        return true;
    return false;
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int a, b; cin >> a >> b;

    if (IsCoPrime(a, b))
        cout << "Yes, Co-Prime" << nl;
    else
        cout << "Not Co-Prime" << nl;


    /*___WAY-2________________________________

        // => If HCF(a,b)==1 => Co-Prime

        if (__gcd(a, b) == 1)
            cout << "Yes, Co-Prime" << nl;
        else
            cout << "Not Co-Prime" << nl;
    ___________________________________________*/
    return 0;
}