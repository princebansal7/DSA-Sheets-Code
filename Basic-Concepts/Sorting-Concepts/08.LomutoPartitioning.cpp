/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

/* ------ LOMUTO Partition [Unstable but faster than Naive Partition]----------------------------------------------

        - Requires only 1 traversal => TC: O(N)
        - Requires Constant Extra Space => SC: O(1)

    WORKING:
        1. Here Also we are given array, low, high index as input
        2. Unlike Naive partition where we get pivot element's index as input,
           in Lomuto partition we always consider Last element as our Pivot element. ( will also
           see what to do if not last element is pivot)
        3. 1st we traverse array from low to high-1 (as High is pivot element, so before that)
        4. If element is smaller than pivot, increase window size of smaller elements by swapping (see in code)

        NOTE: (Handling case when pivot is not last element)

        - if custom pivot element is given, then we simply swap that pivot with last element
          and implement the lomutoPartition in similar manner.

*/
int arr[100];

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
}

int lomutoPartition(int arr[], int low, int high)
{

    int i = low - 1; // for maintianing smaller elements window
    int pivot = arr[high]; // pivot is always the last element

    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {
            i++; // increase the window
            swap(arr[i], arr[j]);
        }
        // printArray(arr, high + 1);
    }
    swap(arr[i + 1], arr[high]);

    return (i + 1); // returing pivot index
}

// (Handling case when pivot is not last element)

int customPivotLumotoPartition(int arr[], int low, int high, int pivotIndex)
{

    // pivot is always the last element OR can use random(low,right) to generate randomly then swap with last element
    // eg: pivotIndex = low + (rand() % high) , then Swap

    // Make the custom pivot element as last element
    swap(arr[pivotIndex], arr[high]);

    // now apply normal lomuto partition

    return lomutoPartition(arr, low, high);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // int pivotIndex = lomutoPartition(arr, 0, n - 1);
    // printArray(arr, n);
    // cout << pivotIndex << nl;

    int newPivotIndex = customPivotLumotoPartition(arr, 0, n - 1, 3);
    printArray(arr, n);
    cout << newPivotIndex << nl;

    return 0;
}