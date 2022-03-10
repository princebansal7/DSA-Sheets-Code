#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"

//__WAY-1__if given intervals are not sorted, TC: O(n^2)_____

vector<pair<int, int>>merge(vector<pair<int, int>>&arr) {

    int n = arr.size();
    sort(arr.begin(), arr.end());

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++) {
        int start = arr[i].first, end = arr[i].second;

        //since the intervals already lies
        //in the data structure present we continue
        if (!ans.empty()) {
            if (start <= ans.back().second) {
                continue;
            }
        }

        for (int j = i + 1; j < n; j++) {
            if (arr[j].first <= end) {
                end = arr[j].second;
            }
        }
        ans.push_back({start, end});
    }

    return ans;
}
// WAY-2__Sorted Intervals_________________________________

vector < vector < int >> merge1(vector < vector < int >> & intervals) {

    sort(intervals.begin(), intervals.end());
    vector < vector < int >> merged;

    for (int i = 0; i < intervals.size(); i++) {
        if (merged.empty() || merged.back()[1] < intervals[i][0]) {
            vector < int > v = {
                intervals[i][0],
                intervals[i][1]
            };

            merged.push_back(v);
        } else {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
    }

    return merged;
}

//LeetCode_______________________________________________

vector<vector<int>> merge2(vector<vector<int>>& intervals) {
    vector<vector<int>> mergedIntervals;
    if (intervals.size() == 0) {
        return mergedIntervals;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (auto it : intervals) {
        if (it[0] <= tempInterval[1]) {
            tempInterval[1] = max(it[1], tempInterval[1]);
        } else {
            mergedIntervals.push_back(tempInterval);
            tempInterval = it;
        }
    }
    mergedIntervals.push_back(tempInterval);
    return mergedIntervals;
}
// _______________________________________________________________

int main() {
    vector <pair<int, int>> arr;
    arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector<pair<int, int>> ans = merge(arr);

    cout << "Merged Overlapping Intervals are " << endl;

    for (auto it : ans) {
        cout << it.first << " " << it.second << "\n";
    }
}
