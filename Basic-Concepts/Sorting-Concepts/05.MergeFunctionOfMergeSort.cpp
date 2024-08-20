/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

/* Here we are given an array and 3 pointers low, mid , high.
   Array is sorted from low to mid (subarray 1)
   and sorted form mid+1 to high   (Subarray2)
   We have to merge these subarrays into sorted manner, CONDITION: low <= mid < high
   EX: I/P: [10,15,20,11,69], low=0,mid=2,high=4
       O/p: [10,11,15,20,69]

*/

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;
}

// Using Previous function

void mergeSortedArrays(int left[], int right[], int n, int m)
{
    int i = 0, j = 0;
    int index = 0;
    while (i < n and j < m)
    {
        if (left[i] <= right[j])
            arr[index++] = left[i++]; // putting values back into original array
        else
            arr[index++] = right[j++]; // creating auxillary left subarray
    }
    while (i < n)
    {
        arr[index++] = left[i++];
    }
    while (j < m)
    {
        arr[index++] = right[j++];
    }

    printArray(arr, index);
}

void mergeSubArray(int arr[], int low, int mid, int high)
{
    int size1 = mid - low + 1, size2 = high - mid;
    int left[size1];  // for left sorted subarray
    int right[size2]; // for right sorted subarray

    for (int i = 0; i < size1; i++) // creating auxillary left subarray
        left[i] = arr[low + i];

    for (int i = 0; i < size2; i++) // creating auxillary right subarray
        right[i] = arr[mid + i + 1];

    mergeSortedArrays(left, right, size1, size2); // can write the code directly here too (Code given below )
}

/*---------Making Single Function--------------------------------------------------------

void mergeSubArray(int arr[], int low, int mid, int high)
{
    int size1 = mid - low + 1, size2 = high - mid;
    int left[size1];  // for left sorted subarray
    int right[size2]; // for right sorted subarray

    for (int i = 0; i < size1; i++) // putting values in auxillary left subarray
        left[i] = arr[low + i];

    for (int i = 0; i < size2; i++) // putting values in auxillary right subarray
        right[i] = arr[mid + i + 1];

    // Wrting code directly here

    int i = 0, j = 0, index = low;
    while (i < size1 and j < size2)
    {
        if (left[i] <= right[j])
            arr[index++] = left[i++]; // putting values back into original array
        else
            arr[index++] = right[j++];
    }
    while (i < size1)
    {
        arr[index++] = left[i++];
    }
    while (j < size2)
    {
        arr[index++] = right[j++];
    }

    printArray(arr, index);
}
-----------------------------------------------------------------------------------------*/

int main()
{
    int n, low, mid, high;
    cin >> n >> low >> mid >> high;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSubArray(arr, low, mid, high);

    return 0;
}