#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;

    bitset<32>b(n);

    cout << "Binary representation of " << n << " is:" << endl;
    cout << b;

    // Brute force approach: Incomplete

    return 0;
}