#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// WAY-1 TC: O(n)
int SumOf1stNnaturalNum1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

// WAY-2: TC: O(1)
int SumOf1stNnaturalNum2(int n)
{
    int sum = n * (n + 1) / 2;
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int ans;

    ans = SumOf1stNnaturalNum2(n);

    cout << "Sum is: " << ans << nl;
    return 0;
}