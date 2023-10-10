/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

/* ------ Hoare Partition [Unstable but faster than Lomuto Partition]----------------------------------------------

        - Requires only 1 traversal => TC: O(N)
        - Requires Constant Extra Space => SC: O(1)

    WORKING:
        1. Here Also we are given array, low, high index as input
        2. Unlike Naive partition where we get pivot element's index as input,
           in Hoare's partition we always consider 1st element as our Pivot element. ( will also
           see what to do if not last element is pivot)
        3. we use two pointer i (low-1), j (high+1)
        4. we move i and j such that, i stops when element is gretaer or equal to pivot element
           and j stops when element is less than the pivot element, then if i and j didn't cross eacch other
           then we simply swaps the current arr[i] and arr[j] otherwise we return j (index of last occurrence
           of pivot element)
        5. This Algo ensures that elements on the left side are smaller or equal to elements on the right side
        6. You'll observe that elements from low to j are smaller and j+1 to high are greater => we succesfully
           partitioned the array

        NOTE 1:
              - Difference b/w Lomuto and Hoare partition is, in Lomuto it puts the pivot at it's correct position
                but in Hoare it doesn't put the pivot at it's correct position rather it just returns the index where
                it should be if placed at correct position.

              - So that's where lomuto partition is takes edge from Hoare's as it sorts that pivot element during partitioning
              - Then why Hoare's partition is better ? it takes less number of comparisons so on avaerage works better than
                lomuto's partition

        NOTE 2: (Handling case when pivot is not last element)

        - if custom pivot element is given, then we simply swap that pivot with last element
          and implement the hoarePartition in similar manner.

*/
int arr[100];

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
}

int hoarePartition(int arr[], int low, int high)
{
    int i = low - 1, j = high + 1;
    int pivot = arr[low]; // pivot is always the 1st element

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}

int customPivotHoarePartition(int arr[], int low, int high, int pivotIndex)
{

    // pivot is always the first element OR can use random(low,right) to generate randomly then swap with first element
    // eg: pivotIndex = low + (rand() % high) , then Swap

    // Make the custom pivot element as first element
    swap(arr[pivotIndex], arr[low]);

    // now apply normal hoare partition

    return hoarePartition(arr, low, high);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pivotIndex = hoarePartition(arr, 0, n - 1);
    printArray(arr, n);
    cout << pivotIndex << nl;

    // int newPivotIndex = customPivotHoarePartition(arr, 0, n - 1, 3);
    // printArray(arr, n);
    // cout << newPivotIndex << nl;

    return 0;
}