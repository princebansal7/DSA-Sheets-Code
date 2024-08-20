#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &v, int target) {

    int n = v.size();
    int ans = -1;

    if (n == 1) {
        if (v[n - 1] == target)
            return n - 1;
        else
            return -1;
    }
    if (v[0] < v[1]) {

        // Sorted in Acsending order
        int s = 0, e = v.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (v[mid] == target) {
                ans = mid;
                return ans;
            }
            else if (v[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
        }

    }
    else {

        //sorted in Descending order

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
    }


    return ans;
}

int main()
{
    int n; cin >> n;
    vector<int> v(n);

    //Enter sorted array

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