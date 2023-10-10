#include <climits>
#include <iostream>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

/* TC: O(n), as Two traversals required-------------------------------------

int SecondLargest(int arr[], int n)
{
    if (n <= 2)
        return -1;

    int maxValue = arr[0];
    for (int i = 1; i < n; i++)
        maxValue = max(maxValue, arr[i]);

    int SecondMaxValue = INT_MIN;

    for (int i = 0; i < n; i++)
        if (arr[i] != maxValue && SecondMaxValue < arr[i])
            SecondMaxValue = arr[i];

    return SecondMaxValue;
}

int SecondSmallest(int arr[], int n)
{
    if (n <= 2)
        return -1;

    int MinValue = arr[0];
    for (int i = 1; i < n; i++)
        MinValue = min(MinValue, arr[i]);

    int SecondMinValue = INT_MAX;

    for (int i = 0; i < n; i++)
        if (arr[i] != MinValue && SecondMinValue > arr[i])
            SecondMinValue = arr[i];

    return SecondMinValue;
}

------------------------------------------------------------------------------*/

// Best approach:-

int SecondLargest(int arr[], int n)
{
    if (n <= 2)
        return -1;

    int MaxValue = INT_MIN, SecondMaxValue = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > MaxValue) {
            SecondMaxValue = MaxValue;
            MaxValue = arr[i];
        } else if (arr[i] > SecondMaxValue && arr[i] != MaxValue)
            SecondMaxValue = arr[i];
    }

    return SecondMaxValue;
}

int SecondSmallest(int arr[], int n)
{
    if (n <= 2)
        return -1;

    int MinValue = INT_MAX, SecondMinValue = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < MinValue) {
            SecondMinValue = MinValue;
            MinValue = arr[i];
        } else if (arr[i] < SecondMinValue && arr[i] != MinValue)
            SecondMinValue = arr[i];
    }

    return SecondMinValue;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "2nd Smallest value: " << SecondSmallest(arr, n) << nl;
    cout << "2nd Largest value: " << SecondLargest(arr, n) << nl;

    return 0;
}