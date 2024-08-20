#include <bits/stdc++.h>
using namespace std;

//______WAY-1 O(n^2)_____________________________

vector<int> twoSum(vector<int>& a, int target)
{

    int n = a.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                return { i, j };
            }
        }
    }
    return { -1, -1 };
}

//______WAY-1 O(n)_________________________________

vector<int> twoSum2(vector<int>& a, int target)
{

    unordered_map<int, int> m;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        int key = target - a[i];

        if (m.find(key) != m.end()) {
            return { m[key], i };
        }
        m[a[i]] = i;
    }
    return { -1, -1 };
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n), ans;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    ans = twoSum(arr, target);

    cout << "way-1:\n";
    for (auto x : ans)
        cout << x << " ";
    cout << endl;

    ans = twoSum2(arr, target);

    cout << "way-2:\n";
    for (auto x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}