/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];
/*--------------MERGE SORT---------------------------------
    1. Divide and Conquer and Merge
    2. Stable Algo => Mantains Order of Original equal items
    3. TC: O(N(logN)), SC: O(N)
    4. Not InPlace ALgo but Variants like Block merge sort algo take SC:O(1) and TC: O(N(logN))
    5. Well suited for External Sorting
    6. Quick Sort outforms Merge sort in case of Arrays
    Preq: You should know How Merge Two Sorted Arrays. [4.1,4.2 refer Code]

*/

void mergeSubArray(int arr[], int low, int mid, int high)
{
    int size1 = mid - low + 1, size2 = high - mid;
    int left[size1]; // for left sorted subarray
    int right[size2]; // for right sorted subarray

    for (int i = 0; i < size1; i++) // putting values in auxillary left subarray
        left[i] = arr[low + i];

    for (int i = 0; i < size2; i++) // putting values in auxillary right subarray
        right[i] = arr[mid + i + 1];

    int i = 0, j = 0;
    int index = low; // beacause making changes in the same array

    while (i < size1 and j < size2) {
        if (left[i] <= right[j])
            arr[index++] = left[i++]; // putting values back into original array
        else
            arr[index++] = right[j++];
    }
    while (i < size1) {
        arr[index++] = left[i++];
    }
    while (j < size2) {
        arr[index++] = right[j++];
    }
}

void mergeSort(int a[], int left, int right)
{
    if (right > left) // => having atleast two elements
    {
        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        mergeSubArray(a, left, mid, right);
    }
}

int main()
{
    int size;
    cin >> size;
    int left = 0, right = size - 1;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    mergeSort(arr, left, right);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
    return 0;
}