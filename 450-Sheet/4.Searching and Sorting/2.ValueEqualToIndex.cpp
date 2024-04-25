#include <bits/stdc++.h>
using namespace std;

vector<int> ValueEqualIndex(vector<int>& a, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (a[i] == i + 1)
            ans.push_back(i + 1);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), res;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    res = ValueEqualIndex(v, n);

    for (auto x : res)
        cout << x << " ";
    return 0;
}