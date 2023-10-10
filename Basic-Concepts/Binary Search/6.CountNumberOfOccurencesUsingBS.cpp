#include<bits/stdc++.h>
using namespace std;

int FirstOccBS(vector<int> &v, int target) {

    int n = v.size();

    int s = 0, e = n - 1;
    int res = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (v[mid] == target) {
            res = mid;
            e = mid - 1;    // [Only Change]: for 1st occurence
        }
        else if (v[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;

    }

    return res;
}

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

    int firstIndex = FirstOccBS(v, target);
    int lastIndex = LastOccBS(v, target);

    int ans = 0;

    if (firstIndex != -1 or lastIndex != -1) {

        int ans = lastIndex - firstIndex + 1;
        cout << "Number of Occcurence of " << target << " is: " << ans;
    }
    else
        cout << "Number of Occcurence of " << target << " is: " << ans;

    return 0;
}