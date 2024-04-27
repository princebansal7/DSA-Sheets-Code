/*
    @author: princebansal_
    Sheet: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
*/
#include <algorithm>
#include <climits>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
#define nl '\n'

// works only when no duplicates

bool bruteForceApproach(vector<int>& v, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j])
                return false;
        }
    }
    return true;
}

// bool betterApproach(vector<int>& v, int n)
// {
// }

// bool optimalApproach(vector<int>& v, int n)
// {
// }

int main()
{
    // vector<int> v { 7, 2, 1, 4, 5, 6, 7, 7, 7, 45, 69, 100, 12, 23, 5, 6 };
    vector<int> v { 1, 2, 3, 4, 4, 5, 6, 7, 8, 8, 9, 10, 4 };
    int n = v.size();

    bool isSorted;
    isSorted = bruteForceApproach(v, n);

    if (isSorted)
        cout << "Array is sorted" << nl;
    else
        cout << "Array is not sorted" << nl;

    return 0;
}