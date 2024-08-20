/*
    @author: princebansal_

*/

/*
    - We'll understand various partitioning ways.

      1. Naive Partition [Stable]   (slowest)
      2. Lomuto Partition [Unstable]
      3. Haore Partition [Unstable]  (fastest)
*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*------NAIVE Partitioning-----------------------------------------------------

    - Undersatnding Naive Partition [Stable]
      1. Here we have an array and index of pivot element
      2. we'll put all the smaller or equal values to the left side of pivot.
      3. then, we'll put pivot element at it's correct position
      4. then we'll put all the greater elements to right of pivot
      5. finally we'll return the index of last occurence of pivot element. (last occurence for the case
         when have muliple same elements)

      eg: I/P: arr = [3,6,12,10,7], p = 5 (pivot element index => 7 is pivot)

         =>    [3,6,7,12,10]  (not necessary that left, right part of pivot will be in sorted order)
                     or
               [6,3,7,12,10]
                     or
                ...........
         O/P: 2 (new pivot element i.e, 7's index)

      eg: I/P: arr = [2,7,8,3,7], p = 1
          => [2,3,7,7,8]
          O/P: 3 (index of last occurence of pivot)

*/

int arr[100];

//------ TC: O(N)+O(N)+O(N)+O(N) =  O(N), SC:theta(N)-------------------------------------------------

int naivePartition(int arr[], int low, int high, int pivotIndex)
{
    int tempArr[high - low + 1], index = 0;

    // filling left part (smaller elements than pivot)
    for (int i = low; i <= high; i++) {
        if (arr[i] < arr[pivotIndex]) {
            tempArr[index] = arr[i];
            index++;
        }
    }

    // filling elements those are equal to pivot (for stability, this different loop for equal elements)
    for (int i = low; i <= high; i++) {
        if (arr[i] == arr[pivotIndex]) {
            tempArr[index] = arr[i];
            index++;
        }
    }

    // gettting new pivot index (i.e, pivot's last occurence index if any)
    int newPivotIndex = low + index - 1;

    // fiiling right part (greater elements than pivot)
    for (int i = low; i <= high; i++) {
        if (arr[i] > arr[pivotIndex]) {
            tempArr[index] = arr[i];
            index++;
        }
    }

    // copying this new partitioned array to original array
    for (int i = low; i <= high; i++) {
        arr[i] = tempArr[i - low];
    }
    return newPivotIndex;
}

int main()
{
    int n, pivotIndex;
    cin >> n >> pivotIndex;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int newPivotIndex = naivePartition(arr, 0, n - 1, pivotIndex); // passing low, high so that would work for subarray too.

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << nl << newPivotIndex << nl;
    return 0;
}