#include <iostream>
#include <utility>
#define nl "\n"
using namespace std;

int arr[100];

int firstPos(int arr[], int start, int end, int key)
{
    int ans = -1;
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = firstPos(arr, start, mid - 1, key);
        }
        else if (key > arr[mid])
        {
            return firstPos(arr, mid + 1, end, key);
        }
        else
        {
            return firstPos(arr, start, mid - 1, key);
        }
    }
    return ans;
}

int lastPos(int arr[], int start, int end, int key) // Wrong conditions
{
    int ans = -1;
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            start = lastPos(arr, mid + 1, end, key);
            ans = mid;
        }
        else if (key > arr[mid])
        {
            return lastPos(arr, mid + 1, end, key);
        }
        else
        {
            return lastPos(arr, start, mid - 1, key);
        }
    }
    return ans;
}

//________________________________________________________________________________________

int main()
{
    int n, key;
    cin >> n >> key;

    // Enter an Sorted array with having some values with multiple occurances

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0, end = n - 1;
    int first = firstPos(arr, start, end, key);
    int last = lastPos(arr, start, end, key);

    cout << "First Position: " << first << nl;
    cout << "Last Position: " << last << nl;

    return 0;
}
