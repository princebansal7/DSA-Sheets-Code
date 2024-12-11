/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// TC: O(N*k),  SC: O(1)

void rotateArrayByOne(vector<int>& nums)
{
    int firstVal = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = firstVal;
}

void rotateArrayByK(vector<int>& nums, int k)
{
    k = k % nums.size();
    for (int i = 1; i <= k; i++) {
        rotateArrayByOne(nums);
    }
}

int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5 };
    int k = 5;
    rotateArrayByK(nums, k);
    cout << "Array after left rotation by " << k << " place" << nl;
    for (int x : nums)
        cout << x << " ";
    cout << nl;
    return 0;
}