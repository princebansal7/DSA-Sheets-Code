/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'
// Given an integer array nums, move all the 0's to the end of the array.
// The relative order of the other elements must remain the same
// Input : nums = [ 0, 1, 4, 0, 5, 2 ]
// Output : [ 1, 4, 5, 2, 0, 0 ]

// TC: O(N) + O(N), SC: O(N)
void moveZeroesToEndBrute(vector<int>& nums)
{
    vector<int> temp;
    int size = nums.size();
    for (int i = 0; i < size; i++) {
        if (nums[i] != 0)
            temp.push_back(nums[i]);
    }
    int tempSize = temp.size();
    for (int i = 0; i < tempSize; i++) {
        nums[i] = temp[i];
    }
    for (int i = tempSize; i < size; i++) {
        nums[i] = 0;
    }
}

// TC: O(N), SC: O(N) - two pointer approach
void moveZeroesToEndOptimal(vector<int>& nums)
{
    int zeroPosition = -1;
    int size = nums.size();

    // going to the first 0th position
    for (int i = 0; i < size; i++) {
        if (nums[i] == 0) {
            zeroPosition = i;
            break;
        }
    }
    // if array does have any zeroes - return
    if (zeroPosition == -1)
        return;

    // Here, swapping the non zero value with 0 till end
    for (int i = zeroPosition + 1; i < size; i++) {
        if (nums[i] != 0) {
            swap(nums[zeroPosition], nums[i]);
            zeroPosition++;
        }
    }
}

int main()
{
    vector<int> nums = { 0, 1, 0, 2, 4, 5, 6, 7, 0, 9, 0, 10, 0 };

    // moveZeroesToEndBrute(nums);
    moveZeroesToEndOptimal(nums);

    cout << "Updated Array" << nl;
    for (int x : nums)
        cout << x << " ";
    cout << nl;

    return 0;
}