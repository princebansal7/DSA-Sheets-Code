/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

int searchTarget(vector<int>& nums, int target)
{
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = { 2, -4, 4, 0, 10, 10, 20 };
    int target = 10;
    cout << "Index of target is: " << searchTarget(nums, target) << nl;
    return 0;
}