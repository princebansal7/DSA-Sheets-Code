#include <bits/stdc++.h>
using namespace std;

void Union(vector<int>& v1, vector<int>& v2)
{

    /*_________WAY-1 (Storing 1 for unique and same values and printing whoes value is 1)__

        cout << "Union of Given Arrays is:\n";

        int count[100] = {0};
        int n = v1.size();
        int m = v2.size();
        // int ans=0;
        for (int i = 0; i < n; ++i)
        {
            count[v1[i]] = 1;
        }
        for (int i = 0; i < m; ++i)
        {
            count[v2[i]] = 1;
        }
        for (int i = 0; i < 100; i++) {
            if (count[i] == 1) {
                // ans++;
                cout << i << " ";
            }
        }
        cout << endl;

    _______________________________________________________________________*/

    //_________WAY-2 (Efficient way)__________________

    cout << "Union of Given Arrays is:\n";
    set<int> s;
    int n = v1.size();
    int m = v2.size();
    for (int i = 0; i < n; ++i) {
        // if (s.find(v1[i]) == s.end())
        s.insert(v1[i]);
    }
    for (int i = 0; i < m; ++i) {
        // if (s.find(v2[i]) == s.end())
        s.insert(v2[i]);
    }
    for (auto x : s)
        cout << x << " ";
    cout << endl;
}

void interSection(vector<int>& v1, vector<int>& v2)
{

    /*____WAY-1 [O(n*m)] (when given arrays are not sorted in Non-decreasing Order)_____

    cout << "InterSection of Given Arrays is:\n";
    for (int i = 0; i < v1.size(); i++) {
        int value = v1[i];
        for (int j = 0; j < v2.size(); j++) {

            if (value == v2[j]) {
                cout << value << " ";
                v2[j] = INT_MIN;    // so that same value doesn't map again
                break;
            }
        }
    }
    ___________________________________________________________________________*/

    /*____WAY-2 [O(n*m)](when given arrays are sorted in Non-decreasing Order)_________

    cout << "InterSection of Given Arrays is:\n";
    for (int i = 0; i < v1.size(); i++) {
        int value = v1[i];
        for (int j = 0; j < v2.size(); j++) {

            if (value < v2[j]) // as sorted arrays, if value is less than the 2nd array value => no point of checking further
                break;

            if (value == v2[j]) {
                cout << value << " ";
                v2[j] = INT_MIN;    // so that same value doesn't map again
                break;
            }
        }
    }
    __________________________________________________________________________*/

    /*_________________WAY-3  max[O(n),O(m)](Here Also Arrays Must be sorted)_____

    int n = v1.size();
    int m = v2.size();

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int i = 0, j = 0;

    cout << "InterSection of Given Arrays is:\n";

    // 2-Pointer approach

    while (i < n && j < m) {
        if (v1[i] < v2[j])
            i++;
        else if (v1[i] > v2[j])
            j++;
        else {
            // When both equal => Intersection case

            cout << v1[i] << " ";
            i++;
            j++;
        }
    }
    cout << endl;
    ________________________________________________________________________________*/

    /*____WAY-4 (for Unsorted array, works with unique Occurences in 2nd array)________________________________________________*/

    int n = v1.size();
    int m = v2.size();

    unordered_set<int> s;

    for (int i = 0; i < n; ++i)
        s.insert(v1[i]);

    cout << "Set elements:\n";

    for (int x : s)
        cout << x << " ";
    cout << endl;

    cout << "InterSection is:\n";
    for (int i = 0; i < m; i++) {
        if (s.find(v2[i]) != s.end()) {
            cout << v2[i] << " ";
        }
    }

    /*_____________________________________________________________________________
                    LeetCode problem 349:

            class Solution {
            public:
                vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

                    // Brute force O(n*m) [Where n , m can be different]

                    vector<int> ans,res;
                    int n=nums1.size();
                    int m=nums2.size();
                    int waste=-1;
                    if(n > m){
                        for(int i=0;i<n;i++){
                            for(int j=0;j<m;j++){
                                if(nums1[i]==nums2[j]){
                                    ans.push_back(nums1[i]);
                                    nums2[j]=waste;
                                }

                            }
                        }
                    }
                    else{
                        for(int i=0;i<m;i++){
                            for(int j=0;j<n;j++){
                                if(nums2[i]==nums1[j]){
                                    ans.push_back(nums2[i]);
                                    nums1[j]=waste;
                                }

                            }
                        }
                    }
                    set<int>s;
                    for(int x : ans)
                        s.insert(x);

                    for(auto x : s)
                        res.push_back(x);
                    return res;

                }
            };

        ________________________________________________________________________*/

    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);

    for (int i = 0; i < n; ++i)
        cin >> v1[i];

    for (int i = 0; i < m; ++i)
        cin >> v2[i];
    //____________________________________________

    Union(v1, v2);

    interSection(v1, v2);

    //____________________________________________
    // for (int i = 0; i < n; ++i)
    //     cout << v1[i] << " ";

    // for (int i = 0; i < m; ++i)
    //     cout << v2[i] << " ";

    return 0;
}