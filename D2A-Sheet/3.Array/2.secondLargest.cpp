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

pair<int, int> bruteForceApproach(vector<int>& v, int n)
{
    sort(v.begin(), v.end(), greater<int>()); // sorting array in decreasing order
    pair<int, int> ans = { v[1], v[n - 2] };
    return ans;
}

pair<int, int> betterApproach(vector<int>& v, int n)
{
    int largest = INT_MIN;
    int secondLargest = largest;
    int smallest = INT_MAX;
    int secondSmallest = smallest;
    for (int i = 0; i < n; i++) {
        largest = max(largest, v[i]);
        smallest = min(smallest, v[i]);
    }

    for (int i = 0; i < n; i++) {
        if (v[i] > secondLargest && v[i] != largest)
            secondLargest = v[i];
        if (v[i] < secondSmallest && v[i] != smallest)
            secondSmallest = v[i];
    }

    return { secondLargest, secondSmallest };
}

pair<int, int> optimalApproach(vector<int>& v, int n)
{
    int largest = INT_MIN;
    int secondLargest = largest;
    int smallest = INT_MAX;
    int secondSmallest = smallest;

    for (int i = 0; i < n; i++) {
        if (v[i] > largest) {
            secondLargest = largest;
            largest = v[i];
        } else if (v[i] > secondLargest && v[i] != largest)
            secondLargest = v[i];

        if (v[i] < smallest) {
            secondSmallest = smallest;
            smallest = v[i];
        } else if (v[i] < secondSmallest && v[i] != smallest)
            secondSmallest = v[i];
    }
    return { secondLargest, secondSmallest };
}

int main()
{
    vector<int> v { 7, 2, 1, 4, 5, 6, 7, 7, 7, 45, 69, 100, 12, 23, 5, 6 };
    // vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // vector<int> v { 1, 2 };

    int n = v.size();

    // pair<int, int> ans = bruteForceApproach(v, n);
    // cout << "Second largest is: " << ans.first << nl;
    // cout << "Second smallest is: " << ans.second << nl;

    // pair<int, int> ans = betterApproach(v, n);
    // cout << "Second largest is: " << ans.first << nl;
    // cout << "Second smallest is: " << ans.second << nl;

    pair<int, int> ans = optimalApproach(v, n);
    cout << "Second largest is: " << ans.first << nl;
    cout << "Second smallest is: " << ans.second << nl;
    return 0;
}