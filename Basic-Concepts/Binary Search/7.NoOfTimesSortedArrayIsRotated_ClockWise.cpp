#include<bits/stdc++.h>
using namespace std;

int NoOfRotationsClockWise(vector<int> &v) {
    int n = v.size();

    int ans = 0;

    int s = 0, e = n - 1;

    while (s <= e) {

        int mid = s + (e - s) / 2;

        int next = (mid + 1) % n; // so that doesn't go out of array size and access invalid memory

        int prev = (n + mid - 1) % n; // so that doesn't go out of array size and access invalid memory (at -ve indexes)

        if (v[mid] <= v[prev] && v[mid] <= v[next]) {

            ans = mid;
            return ans; // min element index => no. of times rotated
        }
        if (v[mid] > v[0]) {
            // left side is sorted => go to right part (unsorted part for min element)
            s = mid + 1;
        }
        else if (v[mid] < v[n - 1]) {
            // right is sorted  => left part is unsorted => go to Left i.e, Unsorted part
            e = mid - 1;
        }

    }
    return ans;
}

int main()
{
    int n; cin >> n;
    vector<int> v(n);


    // Understanding:
    // sorted array : 1 2 3 4 5 6 7 8
    // Rotate it RIGHT side by 3 => 6 7 8 1 2 3 4 5 [this array is Input]

    // NOTE: To find how many time it's rotated, get the index of minimum element, that's your ans.

    //Enter Rotated-Sorted array:

    for (int i = 0 ; i < n ; i++)
        cin >> v[i];

    int minElementIndex = NoOfRotationsClockWise(v);

    cout << "No. of times given array is Rotated [clockwise]: " << minElementIndex << endl;

    cout << "Minimum element is: " << v[minElementIndex];

    return 0;
}