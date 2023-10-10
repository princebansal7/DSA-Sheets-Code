#include<bits/stdc++.h>
using namespace std;

int LastOccBS(vector<int> &v, int target) {

    int n = v.size();
    int res = -1;
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (v[mid] == target) {

            res = mid;
            s = mid + 1;    // [Only Change]: for last occurence
        }
        else if (v[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;

    }

    return res;
}

int main()
{
    int n; cin >> n;
    vector<int> v(n);

    //Enter sorted array in Non-decreasing order => (increasing but element can have multiple occurences)

    for (int i = 0 ; i < n ; i++)
        cin >> v[i];

    int target; cin >> target;

    int index = LastOccBS(v, target);

    if (index != -1)
        cout << "Last Occcurence of " << target << " is at Index: " << index;
    else
        cout << "Not Present";

    return 0;
}