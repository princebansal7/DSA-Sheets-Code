#include<bits/stdc++.h>
using namespace std;

// Seaching element in sorted Rotated (right) array

int pivotElement(vector<int> &v) {

    int n = v.size();
    int ans = -1;
    int s = 0, e = n - 1;

    while (s <= e) {

        int mid = s + (e - s) / 2;
        int next = (mid + 1) % n;
        int prev = (n + mid - 1) % n;

        if (v[mid] <= v[prev] && v[mid] <= v[next]) {
            ans = mid;
            return ans;
        }
        if (v[mid] > v[0]) // => left part of array is sorted, Move in unsorted part (i.e, right part)
            s = mid + 1;
        else if (v[mid] < v[n - 1]) // => right part of array is sorted, Move in unsorted part (i.e, left part)
            e = mid - 1;
    }
    return ans;
}

int BinarySearch(vector<int> &v, int s, int e, int target) {
    int n = v.size();
    int ans = -1;

    while (s <= e) {

        int mid = s + (e - s) / 2;

        if (v[mid] == target) {
            ans = mid;
            return ans;
        }
        if (v[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return ans;

}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    int ans = -1;
    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    int target; cin >> target;

    int minElementIndex = pivotElement(v);


    if (v[minElementIndex] <= target && target <= v[n - 1])     // => search in Right Part
        ans = BinarySearch(v, minElementIndex, n - 1, target);
    else                                                        // => Search in Left Part
        ans = BinarySearch(v, 0, minElementIndex - 1, target);


    if (ans != -1)
        cout << target << " present at " << ans << " index" << endl;
    else
        cout << "Not Present" << endl;

    return 0;
}