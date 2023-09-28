#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int temp = n;
    while (n <= 0) {
        int digit = n % 10;
        if (digit == 0)
            continue;
        if (temp % digit == 0)
            cnt++;
        n = n / 10;
    }

    cout << cnt << nl;
}