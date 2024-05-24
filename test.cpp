#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

bool myComp(pair<int, int>& p1, pair<int, int>& p2)
{
    return p1.second > p2.second;
}

int main()
{
    // testing code
    vector<int> marks { 90, 39, 50, 33, 99, 80 };
    vector<int> roll { 101, 203, 104, 203, 120, 515 };

    vector<pair<int, int>> sorted;
    for (int i = 0; i < 6; i++) {
        sorted.push_back({ roll[i], marks[i] });
    }
    cout << "before sorting:" << nl;
    for (pair<int, int>& x : sorted) {
        cout << x.first << " " << x.second << nl;
    }
    sort(sorted.begin(), sorted.end(), myComp);
    cout << "after sorting:" << nl;
    for (pair<int, int>& x : sorted) {
        cout << x.first << " " << x.second << nl;
    }
    cout << nl;
}