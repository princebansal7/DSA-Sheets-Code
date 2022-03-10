#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
/*
    NOTE:
    Can buy and sell stock any time and we have to return the Maximum Profit

*/

/* [WAY-1]___Brute Force, TC: O(n^2), SC: O(1)____________

int maxProfit(int price[], int start, int end)
{
    if(end <= start)
        return 0;

    int profit = 0;

    for(int i = start; i < end; i++)
    {
        for(int j = i + 1; j <= end; j++)
        {
            if(price[j] > price[i])
            {
                int curr_profit = price[j] - price[i] + maxProfit(price, start, i - 1)+ maxProfit(price, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

________________________________________________________*/

//__Optimised Solution_TC: O(n), SC: O(1)_______________

int stockBuySell(vector<int>&a) {
    int maxProfit = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > a[i - 1])
            maxProfit += (a[i] - a[i - 1]);
    }
    return maxProfit;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    int profit = stockBuySell(a);

    cout << profit << nl;

    return 0;
}