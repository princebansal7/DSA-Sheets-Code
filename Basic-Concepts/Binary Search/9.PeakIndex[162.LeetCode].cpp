#include<bits/stdc++.h>
using namespace std;

int PeakIndex(vector<int> &v) {

    // __________________(Peak Index)____________________________________________

    int n = v.size();

    int ans = -1;

    int s = 0, e = n - 1;

    if (n == 1)
        return 0;

    while (s <= e) {

        int mid = s + (e - s) / 2;

        if (mid > 0 && mid < n - 1) { // Leaving corner elements

            if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
                return mid;
            else if (v[mid + 1] > v[mid])
                s = mid + 1;
            else
                e = mid - 1;
        }
        else if (mid == 0) { // if mid is at the start index (corner)
            if (v[0] > v[1])
                return 0;
            else
                return 1;
        }
        else if (mid == n - 1) { // if mid is at last index  (corner)
            if (v[n - 1] > v[n - 2])
                return n - 1;
            else
                return n - 2;
        }

    }
    return ans;
}

int main()
{
    int t; cin >> t;

    while (t--) {

        int n; cin >> n;
        vector<int> v(n);

        for (int i = 0 ; i < n ; i++)
            cin >> v[i];

        int index = PeakIndex(v);

        cout << "Peak Index: " << index <<  endl;
    }
    /*_________Example_________________________

        input:

        4
        4
        1 2 3 1
        7
        1 2 1 3 5 6 4
        2
        1 2
        2
        2 1

        ouput:

        Peak Index: 2
        Peak Index: 5
        Peak Index: 1
        Peak Index: 0


    ______________________________________________*/

    return 0;
}