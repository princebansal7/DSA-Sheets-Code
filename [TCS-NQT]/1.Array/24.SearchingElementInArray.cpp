/*
    @author: princebansal_

*/

#include <algorithm>
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

//----------TC: O(N), SC: O(1)-------------------

int linearSearch(int arr[], int n, int key)
{
    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            idx = i;
            break;
        }
    }
    return idx;
}

// CONDITION: Given Array should be Sorted , TC: O(logN), SC: O(1)

int binarySearch(int arr[], int n, int key)
{

    // sort(arr, arr + n); // just making sure..

    int idx = -1;
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            idx = mid;
            break;
        }
        if (arr[mid] > key) {
            e = mid - 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        }
    }
    return idx;
}

int main()
{
    int n, key;
    cin >> n >> key;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans;

    // ans = linearSearch(arr, n, key);

    ans = binarySearch(arr, n, key);

    if (ans != -1)
        cout << key << " is Present at index: " << ans << nl;
    else
        cout << key << " Not Present" << nl;

    return 0;
}