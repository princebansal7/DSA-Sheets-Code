#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*
To permute n people in r seats we have to find the value of
            n ! / (n - r) !

*/

// ---------WAY-1 TC: O(n)+O(n)-----------------------------------------
int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

int findPermu1(int n, int r)
{
    int res = fact(n) / fact(n - r);
    return res;
}

// ----------WAY-2 TC: O(n)---------------------------------------------
/*
        n!/(n-r)! can also be written as n*(n-1)*(n-2).....(n-r+1).
        Using this we can calculate n!/(n-r)! in O(n) time complexity
*/

int findPermu2(int n, int r)
{
    int ans = 1;
    for (int i = n; i >= n - r + 1; i--)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    int ans;
    ans = findPermu1(n, r);

    cout << "Ans: " << ans << nl;

    return 0;
}