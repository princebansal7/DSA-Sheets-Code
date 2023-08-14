#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int>& a, int n)
{

    /*___________Naive Approach_________________________

    int max_sum = a[0];

    for (int i = 0; i < n; i++) {

        int curr_sum = 0;

        for (int j = i; j < n; j++) {

            curr_sum = curr_sum + a[j];
            max_sum = max(max_sum, curr_sum);

        }
    }
    return max_sum;


    // ___________________________________________________*/

    // Kadane's Algo

    //------------WAY-1-------------------------------------

    long long maxi = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++) {

        sum += a[i];

        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }
    return maxi;
    //---------------------------------------------------------*/

    //-------------------WAY-2--------------------------------

    // long long maxsum = a[0];
    // long long currsum = a[0];
    // for (int i = 1; i < n; i++) {
    //     int sum = currsum + a[i];
    //     currsum = max(a[i], sum);
    //     maxsum = max(currsum, maxsum);
    // }
    // return maxsum;
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("debug.txt", "w", stderr);
    // #endif

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    cout << "Max SubArray Sum is: " << maxSubarraySum(a, n) << endl;

    return 0;
}