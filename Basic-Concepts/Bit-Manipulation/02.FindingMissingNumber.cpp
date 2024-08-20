/*
    @author: princebansal_
*/

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

// range: 1 to n
// Number are from 1 to n-1
// find Missing number:
// eg: arr[] = {1,2,3,4,6,7,8} => n = 8 => size = 8-1=7
//                             =>  missing is 5

// WAY-1: TC:O(N) (But arithmetic operations are costly)
void findMissing1(vector<int>& v)
{
    int n = v.size() + 1;
    int sum = n * (n + 1) / 2;
    int arraySum = accumulate(v.begin(), v.end(), 0);
    cout << "Missing Number is: " << sum - arraySum << nl;
}

// WAY-1: TC:O(N) (using Bit Manipulation) => Most Optimised
void findMissing2(vector<int>& v)
{
    // Here i'll use XOR (using XOR logic given in README file)
    // eg: {1,2,3,5} => n is 5 , so XOR the whole array with 1 to n elements i.e, (1 to 5):
    //    Just for understanding:
    //    {1,2,3,5}^{1,2,3,4,5} = {1^1,2^2,3^3,4,5^5} => {4} we get the missing element

    int x = v[0];
    rep(i, 1, v.size()) x = x ^ v[i];

    int xr = 1;
    repn(i, 2, v.size() + 1) xr = xr ^ i;
    int ans = x ^ xr;
    cout << "Missing: " << ans << nl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];

    // findMissing1(v);

    findMissing2(v);

    return 0;
}