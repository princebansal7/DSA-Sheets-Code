#include <iostream>
using namespace std;

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("debug.txt", "w", stderr);
    // #endif

    int a, b;
    cin >> a >> b;
    long long ans = 1;
    cout << "Power(" << a << "," << b << ") = ";
    for (int i = 1; i <= b; i++)
        ans = ans * a;

    cout << ans << "\n"
         << "\n";
    return 0;
}