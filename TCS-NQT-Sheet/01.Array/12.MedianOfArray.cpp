/*
    @author: princebansal_

*/

#include <algorithm>
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

double median(int arr[], int n)
{
    sort(arr, arr + n);

    double med;
    if (n & 1) {
        int mid = n / 2; // n odd => (n+1)/2 th term is median
        med = arr[mid];
    } else { // n even => median = ( (n/2)+ ((n/2) + 1) )/ 2
        int mid1 = n / 2 - 1;
        int mid2 = n / 2;
        med = (double)(arr[mid1] + arr[mid2]) / 2;
    }

    return med;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double ans = median(arr, n);

    cout << ans << nl;

    return 0;
}