/*
    @author: princebansal_

*/

#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long

/*
  Checking whether arr1[] is subset of arr2[] or not
  Subset => all the elements of arr1[] must be present in arr2[] (order doesn't matter)

    Example 1:
    Input: arr1[]= [1,3,4,5,2]
           arr2[]= [2,4,3,1,7,5,15]
    Output: arr1[] is a subset of arr2[]

    Example 2:
    Input: arr1[]= [1,3,4,5,2]
           arr2[]= [4,5,2]
    Output: arr1[] is not a subset of arr2[]

    Example 3:
    Input: arr1[]= [1,3,4,5,2]
           arr2[]= [11,12,13,15,16]
    Output: arr1[] is not a subset of arr2[]

*/
int arr1[100], arr2[100];

// WAY-1: My Brute force solution  // TC: O(max(N1,N2)), SC: O(N2)------------

bool isSubset1(int arr1[], int n1, int arr2[], int n2)
{
    if (n2 < n1)
        return false;

    unordered_map<int, int> mp;
    bool ok = false;
    for (int i = 0; i < n2; i++)
        mp[arr2[i]]++;

    for (int i = 0; i < n1; i++) {
        if (mp.find(arr1[i]) == mp.end()) // find() returns the iterator where the key is present, if not present then returns the iterator to end()
            ok = true;
        else
            ok = false;
    }

    if (ok)
        return false;

    return true;
}

// WAY-2: Brute Force: TC: O(N1*N2), SC: O(1)-----------------

bool isSubset2(int arr1[], int n1, int arr2[], int n2)
{
    if (n2 < n1)
        return false;

    for (int i = 0; i < n1; i++) {
        bool ok = false;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                ok = true;
                break;
            }
        }
        if (ok == false)
            return false;
    }
    return true;
}

// WAY-3: Using Binary Search for each element of arr1[] to check whether it is present or not in arr2[].
// =>  TC: O(N.longN), SC: O(1) (More Optimised than previous way)

bool binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            return true;
        }
        if (arr[mid] > key) {
            e = mid - 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        }
    }
    return false;
}

bool isSubset3(int arr1[], int n1, int arr2[], int n2)
{
    if (n2 < n1)
        return false;

    sort(arr2, arr2 + n2); // O(N2.logN2)

    for (int i = 0; i < n1; i++) { // O(N1.log(N2))

        bool isPresent = binarySearch(arr2, n2, arr1[i]);

        if (isPresent == false)
            return false;
    }
    return true;
}

// WAY-4: hashmap way (A little better implementation than my initial brute force way)
// TC: O(max(N1,N2)), SC: O(N2)
bool isSubset4(int arr1[], int n1, int arr2[], int n2)
{
    if (n2 < n1)
        return false;

    unordered_map<int, bool> mp;
    for (int i = 0; i < n2; i++)
        mp[arr2[i]] = true;

    for (int i = 0; i < n1; i++) {
        if (mp.count(arr1[i]) == 0) // count() checks whether the key is present or not, if present => returns 1 else returns 0
            return false;
    }
    return true;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    bool ans;

    // ans = isSubset1(arr1, n1, arr2, n2);

    // ans = isSubset2(arr1, n1, arr2, n2);

    // ans = isSubset3(arr1, n1, arr2, n2);

    ans = isSubset4(arr1, n1, arr2, n2);

    if (ans)
        cout << "arr1[] is Subset of arr2[]" << nl;
    else
        cout << "arr1[] is Not Subset of arr2[]" << nl;

    return 0;
}