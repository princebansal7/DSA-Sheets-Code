#include <bits/stdc++.h>
using namespace std;

/*____________Way-1 (Efficeint)____________________________________________________

vector<int> SumOfArray(vector<int>&a, int n, vector<int>&b, int m) {

    int i = n - 1, j = m - 1;
    int carry = 0;
    vector<int> res;

    while (i >= 0 && j >= 0) {

        int Initial_sum = a[i] + b[j] + carry;
        carry = Initial_sum / 10;
        int final_sum = Initial_sum % 10;

        res.push_back(final_sum);
        i--;
        j--;
    }

    // if 1st array is larger

    while (i >= 0) {

        int Initial_sum = a[i] + carry;
        carry = Initial_sum / 10;
        int final_sum = Initial_sum % 10;

        res.push_back(final_sum);
        i--;
    }

    // if 2st array is larger

    while (j >= 0) {

        int Initial_sum = b[j] + carry;
        carry = Initial_sum / 10;
        int final_sum = Initial_sum % 10;

        res.push_back(final_sum);
        j--;
    }

    // if Both arrays are equal => handling extra carry

    while (carry != 0) {

        int Initial_sum = carry;
        carry = Initial_sum / 10;
        int final_sum = Initial_sum % 10;

        res.push_back(final_sum);
    }


    reverse(res.begin(), res.end());

    return res;
}

__________________________________________________________________*/

//_____________________WAY-2__________________________________________

vector<int> SumOfArray(vector<int>& a, int n, vector<int>& b, int m)
{

    long long int sum1 = 0;
    long long int sum2 = 0;

    // Sum of 1st array = represeting as number1
    for (int i = 0; i < n; i++) {
        sum1 = sum1 * 10 + a[i];
    }

    // Sum of 2nd array = represeting as number2
    for (int i = 0; i < m; i++) {
        sum2 = sum2 * 10 + b[i];
    }

    long long int ans = sum1 + sum2; // Total Sum

    vector<int> res;

    while (ans != 0) {
        res.push_back(ans % 10);
        ans = ans / 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), ans;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    cout << "Sum is:\n";
    ans = SumOfArray(a, n, b, m);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
