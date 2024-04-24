/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

int main()
{
    vector<int> v { 1, 2, 3, 4, 44, 3, 232, 12, 1, 23, 4, 5, 6 };
    int n = v.size();
    int ans = v[0];
    for (int i = 0; i < n; i++)
        if (v[i] > ans)
            ans = v[i];
    cout << "max value is: " << ans << nl;
    return 0;
}