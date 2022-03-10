#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int a, b; cin >> a >> b;
    long long ans = 1;
    cout << "Value of " << a << "^" << b << " is: ";
    for (int i = 1; i <= b; i++) {
        ans = ans * a;
    }
    cout << ans;
    return 0;
}