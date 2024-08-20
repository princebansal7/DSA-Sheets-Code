/*
    @author: princebansal_
*/

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

/*
Given an array. Task is find to maximum AND value of any generated pair (vi,vj) from array such that
i!=j
eg: arr[]={4,8,12,16}
    ans = 8, as pair (8,12) => have max value of (8 & 12) = 8

*/

// TC: O(N^2), Naive way (Here we are checking all the pairs)
void getMaxAND1(vector<int>& v)
{
    int ans = 0;
    int n = v.size();
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if ((i != j)) {
                int maxi = v[i] & v[j];
                ans = max(ans, maxi);
            }
        }
    }
    cout << "Maximum Value is: " << ans << nl;
}

//  To-D0:

void getMaxAND2(vector<int>& v)
{
    int ans = 0;
    int n = v.size();
    cout << "Maximum Value is: " << ans << nl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];

    // getMaxAND1(v);

    getMaxAND2(v);

    return 0;
}