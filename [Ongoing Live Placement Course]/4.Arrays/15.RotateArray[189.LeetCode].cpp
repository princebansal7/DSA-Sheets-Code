#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &a, int k)
{

    // Clockwise rotate => right rotation

    int n = a.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {

        temp[(i + k) % n] = a[i];
    }
    a = temp;
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    rotate(a, k);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}