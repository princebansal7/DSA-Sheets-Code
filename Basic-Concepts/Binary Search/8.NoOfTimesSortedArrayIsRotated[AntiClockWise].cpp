#include<bits/stdc++.h>
using namespace std;

int NoOfRotationsAntiClockWise(vector<int> &v) {

    // __________________(Using Clock-Wise Rotation and Size)____________________________________________

    int n = v.size();

    int ans = 0;

    int s = 0, e = n - 1;

    while (s <= e) {

        int mid = s + (e - s) / 2;

        int next = (mid + 1) % n; // so that doesn't go out of array size and access invalid memory

        int prev = (n + mid - 1) % n; // so that doesn't go out of array size and access invalid memory (at -ve indexes)

        if (v[mid] <= v[prev] && v[mid] <= v[next]) {

            ans = n - mid; // (no. of rotations = (size - min element index)
            return ans;
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


    // sorted array : 1 2 3 4 5 6 7 8
    // Rotate it left side by 3 => 4 5 6 7 8 1 2 3 [this array is Input]

    // NOTE: To find how many time it's rotated, get the index of minimum element, then (size - min element index) is the No of rotations Anticlock-wise

    //Enter Rotated-Sorted array
    for (int i = 0 ; i < n ; i++)
        cin >> v[i];

    int rotations = NoOfRotationsAntiClockWise(v);

    cout << "No. of times given array is Rotated [Anti-clockwise]: " << rotations << endl;

    cout << "Minimum element is: " << v[n - rotations];

    return 0;
}