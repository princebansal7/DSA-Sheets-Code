#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &v, int target) {

    int ans = -1;
    int s = 0, e = v.size() - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (v[mid] == target) {
            ans = mid;
            return ans;
        }
        else if (v[mid] > target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return ans;
}

int main()
{
    int n; cin >> n;
    vector<int> v(n);

    //Enter sorted array in decreasing order

    for (int i = 0 ; i < n ; i++)
        cin >> v[i];

    int target; cin >> target;

    int index = BinarySearch(v, target);

    if (index != -1)
        cout << "Index of " << target << " is " << index;
    else
        cout << "Not Present";

    return 0;
}