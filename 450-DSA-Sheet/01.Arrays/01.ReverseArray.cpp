#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("debug.txt", "w", stderr);
    // #endif

    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    /*------WAY-1----------------

    reverse(v.begin(), v.end());

    ---------------------------- */

    /*----------Using for loop-------

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    ------------------------------*/

    //--------Using while loop---------

    int i = 0, j = n - 1;
    while (i < j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";

    cout << nl;

    return 0;
}