#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

//__Way-1__TC: O(n)____________

bool isPrime1(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

//__Way-2__TC: O(sqrt(n))___________

bool isPrime2(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int n; cin >> n;

    if (isPrime1(n))
        cout << "Prime" << nl;
    else
        cout << "Not Prime" << nl;


    return 0;
}