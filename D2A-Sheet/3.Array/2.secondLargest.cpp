/*
    @author: princebansal_
    Sheet: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
*/
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
#define nl '\n'

// works only when no duplicates

pair<int, int> bruteForceApproach(vector<int>& v, int n)
{
    sort(v.begin(), v.end(), greater<int>()); // sorting array in decreasing order
    pair<int, int> ans = { v[1], v[n - 2] };
    return ans;
}

pair<int, int> betterApproach(vector<int>& v, int n)
{
    int largest = v[0];
    int secondLargest = largest;
    int smallest = v[0];
    int secondSmallest = smallest;
    for (int i = 1; i < n; i++) {
        largest = max(largest, v[i]);
        smallest = min(smallest, v[i]);
    }
    // cout << "largest is: " << largest << nl;
    // cout << "smallest is: " << smallest << nl;
    for (int i = 0; i < n; i++) {
        if (secondLargest < v[i] && secondLargest != largest)
            secondLargest = v[i];
        if (secondSmallest > v[i] && secondSmallest != smallest)
            secondSmallest = v[i];
        cout << "Second largest is: " << secondLargest << nl;
        cout << "Second smallest is: " << secondSmallest << nl;
    }

    return { secondLargest, secondSmallest };
}

int main()
{
    // vector<int> v { 7, 2, 3, 4, 44, 69, 12, 23, 5, 6 };
    vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = v.size();
    // pair<int, int> ans = bruteForceApproach(v, n);
    // cout << "Second largest is: " << ans.first << nl;
    // cout << "Second smallest is: " << ans.second << nl;

    pair<int, int> ans = betterApproach(v, n);
    cout << "Second largest is: " << ans.first << nl;
    cout << "Second smallest is: " << ans.second << nl;
    return 0;
}