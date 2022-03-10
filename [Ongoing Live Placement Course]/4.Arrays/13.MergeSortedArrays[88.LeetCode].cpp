#include<bits/stdc++.h>
using namespace std;

void mergeSorted(vector<int> &a, int m, vector<int> &b, int n) {

    int i = 0, j = 0;
    vector<int> ans;

    while (i < m && j < n) {

        if (a[i] < b[j]) {
            ans.push_back(a[i++]);
        }
        else {
            ans.push_back(b[j++]);
        }
    }
    while (i < m)
        ans.push_back(a[i++]);

    while (j < n)
        ans.push_back(b[j++]);

    a = ans;
}

void print(vector<int> &ans) {
    for (int x : ans)
        cout << x << " ";
    cout << endl;
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int n, m;

    cin >> m >> n;

    vector<int> a(m + n), b(n);

    for (int i = 0 ; i < m ; i++)
        cin >> a[i];

    for (int i = 0 ; i < n ; i++)
        cin >> b[i];

    // print(a);
    // print(b);

    mergeSorted(a, m, b, n);

    print(a);

    return 0;
}