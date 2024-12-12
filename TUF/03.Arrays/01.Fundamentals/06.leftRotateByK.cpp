/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// Brute - approach 1
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

// better - approach 2
// TC: O(N), SC: O(N)
void rotateArrayByKBetter(vector<int>& nums, int k)
{
    int size = nums.size();
    k = k % size;
    vector<int> temp;

    // putting 1st k values in temp array
    for (int i = 0; i < k; i++) {
        temp.push_back(nums[i]);
    }

    // shifting remaining values to left
    for (int i = k; i < size; i++) {
        nums[i - k] = nums[i];
    }

    // putting back (shifted k values in the OG Array)
    for (int i = 0; i < temp.size(); i++) {
        nums[(size - k) + i] = temp[i];
    }
}

// Optimal - approach 3
// TC: O(N), SC: O(1)

void reverse(vector<int>& nums, int start, int end)
{
    while (start < end) {
        swap(nums[start++], nums[end--]);
    }
}

void rotateArrayByKOptimal(vector<int>& nums, int k)
{
    int size = nums.size();
    k = k % size;
    // first reverse first k values
    reverse(nums, 0, k - 1);

    // then reverse remaining values
    reverse(nums, k, size - 1);

    // lastly reverse the whole array
    reverse(nums, 0, size - 1);
}

int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5 };
    int k = 2;

    // rotateArrayByK(nums, k);
    // rotateArrayByKBetter(nums, k);
    rotateArrayByKOptimal(nums, k);

    cout << "Array after left rotation by " << k << " place" << nl;
    for (int x : nums)
        cout << x << " ";
    cout << nl;
    return 0;
}