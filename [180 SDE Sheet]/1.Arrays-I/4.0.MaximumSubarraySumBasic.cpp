#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

//__Naive Way__TC: O(n^3)____________________________________________

int maxSubArraySum1(vector<int>& nums, vector<int>& subarray)
{
    int maxi = 0;
    int n = nums.size();
    if (n == 1) {
        return nums[0];
    }
    for (int i = 0; i <= n - 1; i++) {
        for (int j = i; j <= n - 1; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum = sum + nums[k];
            }
            if (sum > maxi) {
                subarray.clear(); // clearing the least sum subarray
                maxi = sum;
                subarray.push_back(i);
                subarray.push_back(j);
            }
        }
    }
    return maxi;
}

//__Better Way__TC: O(n^2)____________________________________________

int maxSubArraySum2(vector<int>& nums)
{
    int maxi = 0;
    int n = nums.size();

    if (n == 1) {
        return nums[0];
    }
    for (int i = 0; i <= n - 1; i++) {
        int sum = 0;
        for (int j = i; j <= n - 1; j++) {
            sum = sum + nums[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // vector <int> subarray;
    // int ans = maxSubArraySum1(arr, subarray); // getting sum and subArray both

    // cout << "The subarray is " << nl;

    // for (int i = subarray[0]; i <= subarray[1]; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << nl << "The longest subarray's maximum sum is " << ans << nl;

    int ans = maxSubArraySum2(arr);
    cout << nl << "The longest subarray's maximum sum is " << ans << nl;

    return 0;
}