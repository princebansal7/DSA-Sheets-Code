/*
    @author: princebansal_
*/

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// TC: O(N(logN)), SC: O(1)
int largestBrute(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size() - 1];
}

// TC: O(N), SC: O(1)
int largestOptimal(vector<int>& nums)
{
    int largest = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> nums = { 2, -4, 4, 0, 10, 10, 20 };

    cout << "Largest is: " << largestBrute(nums) << nl;
    cout << "Largest is: " << largestOptimal(nums) << nl;

    return 0;
}