#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

// Not at all Optimised way, works well till n<=30 , Opitmised way is DP (Dynamic programming)
int CountWaysToClimb(int n)
{
    if (n < 0)
        return 0;
    if (n == 0) // zero stair => already climbed => 1 way only
        return 1;

    return CountWaysToClimb(n - 1) + CountWaysToClimb(n - 2);
}

// Using Loop
int ClimbStairs(int n)
{
    if (n < 0)
        return 0;
    if (n <= 2)
        return n;

    vector<int> way(n + 1, 0);
    way[1] = 1, way[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        way[i] = way[i - 1] + way[i - 2];
    }
    return way[n];
}

int main()
{
    int n;
    cout << "Enter Number of Stairs: ";
    cin >> n;

    // cout << "Total Distinct Ways to climb all stairs: " << CountWaysToClimb(n) << nl;
    cout << "Total Distinct Ways to climb all stairs: " << ClimbStairs(n) << nl;
    return 0;
}