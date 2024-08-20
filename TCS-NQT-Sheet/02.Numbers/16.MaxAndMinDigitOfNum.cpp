#include <iostream>
#include <climits>
using namespace std;
#define nl "\n"
#define ll long long

// TC: O(log N)

void getMaxMinDigit(int n)
{
    int minDigit = INT_MAX;
    int maxDigit = INT_MIN;
    while (n > 0)
    {
        int lastDigit = n % 10;
        minDigit = min(minDigit, lastDigit);
        maxDigit = max(maxDigit, lastDigit);
        n = n / 10;
    }
    cout << "Largest Digit: " << maxDigit << nl;
    cout << "Smallest Digit: " << minDigit << nl;
}

int main()
{
    int n;
    cin >> n;

    getMaxMinDigit(n);

    return 0;
}