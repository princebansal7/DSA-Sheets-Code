/*
    @author: princebansal_
    Sheet: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// works only when no duplicates

int bruteForceApproach(vector<int>& v, int n)
{
    sort(v.begin(), v.end());
    return v[n - 1];
}

int recursiveApproach(vector<int>& v, int n)
{
    int ans = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > ans)
            ans = v[i];
    return ans;
}

int main()
{
    vector<int> v { 1, 2, 3, 4, 44, 69, 12, 23, 5, 6 };
    int n = v.size();
    cout << "Max value is: " << bruteForceApproach(v, n) << nl;
    cout << "Max value is: " << recursiveApproach(v, n) << nl;
    return 0;
}