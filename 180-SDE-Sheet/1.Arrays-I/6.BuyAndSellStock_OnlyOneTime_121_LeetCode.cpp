#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
/*
    NOTE:
    Can buy and sell stock one time only one time

*/

/*_____ Wrong Logic______________________

int stockBuySell(vector<int> &a) {
    sort(a.begin(), a.end());
    return (a[a.size() - 1] - a[0]);
}
________________________________________*/

/* [WAY-1]___Brute Force, TC: O(n^2), SC: O(1)____________

int stockBuySell(vector<int> &a) {
    int n = a.size();
    int maxProfit = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                maxProfit = max(a[j] - a[i], maxProfit);
            }
        }
    }
    return maxProfit;
}
___________________________________________________________*/

/* [WAY-2]___Brute Force, TC: O(n^2), SC: O(1)____________

int stockBuySell(vector<int> &a) {
    int n = a.size();
    int maxProfit = 0;
    for (int i = 0; i < n; i++) {
        int minPrice = a[i];
        for (int j = i; j < n; j++) {
            maxProfit = max(maxProfit, a[j] - minPrice);
            minPrice = min(minPrice, a[j]);
        }
    }
    return maxProfit;
}
________________________________________________________*/

//__Optimised Solution_TC: O(n), SC: O(1)_______________

int stockBuySell(vector<int>& a)
{
    int n = a.size();
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < n; i++) {
        minPrice = min(minPrice, a[i]);
        maxProfit = max(maxProfit, a[i] - minPrice);
    }
    return maxProfit;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int profit = stockBuySell(a);

    cout << profit << nl;

    return 0;
}