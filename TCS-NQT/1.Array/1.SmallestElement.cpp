#include <algorithm>
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

// TC: O(n*log(n)) , SC: O(1)
int FindSmallest1(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[0];
}

// TC: O(n), SC: O(1)
int FindSmallest2(int arr[], int n)
{
    int minValue = arr[0];
    for (int i = 1; i < n; i++)
        if (minValue > arr[i]) // minValue = min(arr[i],minValue);
            minValue = arr[i];
    return minValue;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Minimum value: " << FindSmallest2(arr, n) << nl;
    return 0;
}