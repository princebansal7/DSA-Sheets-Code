#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    // Logic:

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            if (i != j) // just for avoiding un-necessary comparisons
                swap(v[i], v[j]);
            j++;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";

    return 0;
}