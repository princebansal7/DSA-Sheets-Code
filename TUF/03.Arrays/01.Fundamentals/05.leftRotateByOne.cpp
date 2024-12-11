/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// TC: O(N),  SC: O(1)
// Note: Space complexity: O(N) for this algo as we are using and modifying given array,
//                         but it is O(1) in context we didn't use any extra space

void rotateArrayByOne(vector<int>& nums)
{
    int firstVal = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = firstVal;
}

int main()
{
    vector<int> nums = { 2, 4, 5, 6, 7, 1 };
    rotateArrayByOne(nums);
    cout << "Array after left rotation by one place" << nl;
    for (int x : nums)
        cout << x << " ";
    cout << nl;
    return 0;
}