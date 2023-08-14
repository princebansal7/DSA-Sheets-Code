#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    /*------WAY-1----------------

    reverse(v.begin(), v.end());

    ---------------------------- */

    /*----------WAY-2-------------*/

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";

    cout << nl;

    return 0;
}