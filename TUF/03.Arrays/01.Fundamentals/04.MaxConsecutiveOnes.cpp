/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

int maxConsecutiveOnesBrute(vector<int>& nums)
{
    int answer = 0, maxOnesCount = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            maxOnesCount++;
            answer = max(maxOnesCount, answer);
        } else {
            maxOnesCount = 0;
        }
    }
    return answer;
}

int main()
{
    // vector<int> nums = { 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0 };
    vector<int> nums = { 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

    cout << "Maximum consecutive ones are: " << maxConsecutiveOnesBrute(nums) << nl;

    return 0;
}