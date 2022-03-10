#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

//___Kadane's Algorithm__________________________________

int maxSubArraySumKadane(vector<int> &arr) {

    int n = arr.size();
    ll maxi = INT_MIN;
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    // here maximum subarray sum can be negative too [as per LeetCode conditions], to avoid that, just check
    // whether maxi is < 0 or not if yes, then make it 0 (as CodeStudio ques conditions)
    return maxi;
}

//____Kadane's Algo (Also getting MaxiMum subArray too)___________________

int maxSubArray(vector <int> & nums, vector <int> & subarray) {
    int n = nums.size();
    int max_so_far = nums[0];
    int max_end_here = 0;

    int s = 0;
    for (int i = 0; i < n; i++) {
        max_end_here += nums[i];
        if (max_end_here > max_so_far) {
            subarray.clear();
            max_so_far = max_end_here;
            subarray.push_back(s);
            subarray.push_back(i);

        }
        if (max_end_here < 0) {
            max_end_here = 0;
            s = i + 1;
        }
    }
    return max_so_far;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0 ; i < n ; i++)
        cin >> arr[i];

    int ans = maxSubArraySumKadane(arr);
    cout << nl << "The longest subarray's maximum sum is " << ans << nl << nl;

    // _________Getting SubArray too_______________________________________________

    vector<int> arr2(n);
    vector < int > subarray;
    for (int i = 0 ; i < n ; i++)
        cin >> arr2[i];

    int ans2 = maxSubArray(arr, subarray);
    cout << "The SubArray sum is " << ans2 << endl;
    cout << "The subarray is " << endl;
    for (int i = subarray[0]; i <= subarray[1]; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}