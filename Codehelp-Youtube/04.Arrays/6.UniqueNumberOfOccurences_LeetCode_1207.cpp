#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& a)
{

    // Nice Question

    int n = a.size();
    set<int> s;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        m[a[i]]++;
    }

    for (auto x : m)
        s.insert(x.second);

    if (s.size() == m.size())
        return true;
    return false;
}

int main()
{
    vector<int> v = { 1, 2, 2, 3, 3, 3 };
    if (uniqueOccurrences(v))
        cout << "True";
    else
        cout << "False";

    cout << endl;
    return 0;
}