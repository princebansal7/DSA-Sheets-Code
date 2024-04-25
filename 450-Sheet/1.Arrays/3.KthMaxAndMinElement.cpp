#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    /*-------------WAy-1------------------------

    sort(v.begin(), v.end()); // using STL sorting algo

    cout << k << "th Min element is: " << v[k - 1];
    cout << k << "th Max element is: " << v[n - k];

    ------------------------------------------*/

    /*-------------WAY-2---------------------*/
    // (Wihtout Sorting Algo, naive method)

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] >= v[j])
                swap(v[j], v[i]);
        }
    }
    cout << k << "th Min element is: " << v[k - 1] << endl;
    cout << k << "th Max element is: " << v[n - k] << endl;

    return 0;
}