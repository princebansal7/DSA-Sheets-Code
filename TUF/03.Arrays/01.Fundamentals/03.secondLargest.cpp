/*
    @author: princebansal_
*/

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// TC: O(N(logN)) + O(N), SC: O(1)
int secondLargestBrute(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int largest = nums[size - 1];
    for (int i = size - 2; i >= 0; i--) {
        if (nums[i] != largest) {
            return nums[i]; // second largest
        }
    }
    return -1; // returning -1 in case second largest not found
}

// TC: O(N) + O(N),  SC: O(1)
int secondLargestBetter(vector<int>& nums)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

// TC: O(N),  SC: O(1)
int secondLargestOptimal(vector<int>& nums)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        if (nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main()
{
    // vector<int> nums = { 2, -4, 4, 0, 10, 10, 20 };
    vector<int> nums = { 10, 10, 10, 10, 10 };
    // vector<int> nums = { 1, 7, 7, 7, 7, 7, 7, 7 };

    cout << "Second Largest is: " << secondLargestBrute(nums) << nl;
    cout << "Second Largest is: " << secondLargestBetter(nums) << nl;
    cout << "Second Largest is: " << secondLargestOptimal(nums) << nl;

    return 0;
}