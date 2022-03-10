#include<bits/stdc++.h>
using namespace std;



int main()
{

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];
    /*------WAY-1------------------------------------

        sort(v.begin(), v.end());

        int max = v[n - 1];
        int min = v[0];
        cout << "Min: " << min << "\nMax: " << max;

    --------------------------------------------------*/

    //------------Way-2-------------------------------

    int min, max;
    min = max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > max)
            max = v[i];
        else if (v[i] < min)
            min = v[i];
    }
    cout << "Min: " << min << "\nMax: " << max;

    return 0;
}