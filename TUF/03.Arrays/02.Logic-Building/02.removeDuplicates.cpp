/*
    @author: princebansal_
*/

#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define nl '\n'

// TC: O(N*logN) + O(N), SC: O(N)

int removeDuplicateFromSortedArrayBrute(vector<int>& nums)
{
    set<int> st;
    for (int i = 0; i < nums.size(); i++) {
        st.insert(nums[i]); // each insert takes logN time
    }
    // updating OG array with unique elements
    int index = 0;
    for (int elementValInSet : st) {
        nums[index++] = elementValInSet;
    }
    return index; // size of set
}
// TC: O(N), SC: O(1) - two pointer approach (as non-decreasing array is given)
int removeDuplicateFromSortedArrayOptimal1(vector<int>& nums)
{
    int i = 0;
    int j = i + 1;
    while (j < nums.size()) {
        // skipping similar values
        if (nums[i] == nums[j]) {
            j++;
        } // as soon as different value found => moving i one location and updating value
        else {
            i++;
            nums[i] = nums[j];
            j++;
        }
    }
    return i + 1; // new size (till where only unique values are there)
}

// TC: O(N), SC: O(1) - two pointer approach (as non-decreasing array is given)
// Another way to write above same code
int removeDuplicateFromSortedArrayOptimal2(vector<int>& nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            nums[i + 1] = nums[j]; // or nums[++i] = nums[j];
            i++;
        }
    }
    return i + 1; // new size (till where only unique values are there)
}

int main()
{
    vector<int> nums = { -2, 2, 4, 4, 4, 4, 5, 5, 6, 6, 6, 69, 69, 100, 100, 100 };

    // int sizeAfterRemovingDuplicates = removeDuplicateFromSortedArrayBrute(nums);
    // int sizeAfterRemovingDuplicates = removeDuplicateFromSortedArrayOptimal1(nums);
    int sizeAfterRemovingDuplicates = removeDuplicateFromSortedArrayOptimal2(nums);

    cout << "Updated Array size is " << sizeAfterRemovingDuplicates << nl;
    for (int i = 0; i < sizeAfterRemovingDuplicates; i++)
        cout << nums[i] << " ";
    cout << nl;

    return 0;
}