#include <bits/stdc++.h>
using namespace std;

// int first(vector<int> &arr, int n , int k) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == k) {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid] > k)
//             e = mid - 1;
//         else {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int last(vector<int> &arr, int n , int k) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == k) {
//             s = mid + 1;
//             ans = mid;
//         }
//         else if (arr[mid] > k) {
//             e = mid - 1;
//         }
//         else
//             s = mid + 1;
//     }
//     return ans;
// }

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int k;
    cin >> k;
    // ans.push_back(first(v, n, k));
    // ans.push_back(last(v, n, k));

    // for (auto x : ans) cout << x << " ";

    //____Using lower_bound() and upper_bound() functions__

    auto it1 = lower_bound(v.begin(), v.end(), k);
    auto it2 = upper_bound(v.begin(), v.end(), k);

    if (it1 == v.end() && it2 == v.end())
        cout << -1 << " " << -1;
    else
        cout << (it1 - v.begin()) << " " << (it2 - 1 - v.begin()) << endl;

    return 0;
}