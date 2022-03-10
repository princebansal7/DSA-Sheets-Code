#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& a) {

//____________Way-1______________________

    vector<int> ans;
    int n = a.size();

    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++)
        if (a[i - 1] == a[i])
            ans.push_back(a[i]);

    return ans;


    /*_____________way-2_____________________

            vector<int> v(n+1), ans;

            for(int i=0;i<n;i++)
                v[a[i]]++;

            for(int i=0;i<n+1;i++){
                if(v[i]==2)
                    ans.push_back(i);
            }
            return ans;
    _________________________________________*/

    /*_____________way-3_____________________

        // O(n) with constant Extra space

        unordered_set<int>s;
        vector<int> ans;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            if (s.find(a[i]) == s.end())
                s.insert(a[i]);
            else
                ans.push_back(a[i]);
        }
        return ans;
    _________________________________________*/


}

int main()
{
    vector<int>v = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int>v2 = findDuplicates(v);
    for (auto x : v2)
        cout << x << " ";

    return 0;
}