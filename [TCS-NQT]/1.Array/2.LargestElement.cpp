#include <algorithm>
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

// TC: O(n*log(n)) , SC: O(1)
int FindLargest1(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 1];
}

// TC: O(n), SC: O(1)
int FindLargest2(int arr[], int n)
{
    int maxValue = arr[0];
    for (int i = 1; i < n; i++)
        if (maxValue < arr[i]) // maxValue = max(arr[i],maxValue);
            maxValue = arr[i];
    return maxValue;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum value: " << FindLargest1(arr, n) << nl;
    return 0;
}