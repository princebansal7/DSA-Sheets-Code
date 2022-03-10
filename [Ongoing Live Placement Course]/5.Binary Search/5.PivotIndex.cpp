#include<bits/stdc++.h>
using namespace std;

// Pivot Element / Minimum element in right (sorted) rotated array

//__________WAY-1_______________________________________________________

int pivotElement(vector<int> &v) {

    int n = v.size();

    int s = 0, e = n - 1;

    while (s < e) {

        int mid = s + (e - s) / 2;

        if (v[mid] >= v[0])
            s = mid + 1;
        else
            e = mid;
    }
    return s;



    /*__________WAY-2____________________________________________

        // In sorted rotated array:
        //     Index of min. element gives number of times array's been rotated
        //     and Acc. to Love babbar Pivot is min element => both task done.

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
    _______________________________________________________________*/
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    int index = pivotElement(v);
    cout << "Pivot / Min element is: " << v[index] << " having Index: " << index;


    return 0;
}