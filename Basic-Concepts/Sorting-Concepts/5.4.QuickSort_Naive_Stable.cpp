/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int arr[100];

/*-------- Quick Sort --------------------------------------------------
    - Divide and Conqure Algo
    - Worst time complexity: O(N^2)
    - Despite O(N^2) TC, It is Considered faster due to he following:
      1. In-Place (ignoring recursion call stack)
      2. Cache Friendly
      3. Average case TC: O(N.logN)
      4. Tail recursion (recursive call is made at last)
    - Partion function is the key function (Naive (for stable), Lomuto , Hoare (for efficiency, generally used))
    - sort() in STL use Intro sort (hybrid of heap, insertion, quick sort)
    - When stability is not required Quick sort is best
    - When stability required merge sort used.

    Analysis on Quick Sort (Hoare's partition used generally):
        - Best case: Input array gets divided into two halves, pivot becomes middle element value vise: TC: O(N.logN)
        - Average case: O(N.logN)
        - Worst case: when partition function parts the array such that it have 1 element on one side
                      and n-1 elements on another side: TC: O(N^2)

    2. Space Complexity:

         - Mostly it's said that Quick sort is In-Place but it's arguable, if by **in-place is defined as an algo which takes constant extra space**, then Quick Sort is definitly not 'In-Place', the partition function of quick sort is in-place if Hoare's or Lomuto's partitioning is used.
         - If you are considering Quick sort as an algorithm, then it requires extra space for Recursion
           call stack.
         - **In-Place Algo 2nd definition:** if your algorithm is *not copying input elements to an     auxillary space* then this algo is in-place, so by this definition Quick Sort is In-place as it doesn't copy the input elements to another space, it only needs the extra space for recusion call stack.
         - Space required in recursion call stack (In Lomuto's or Hoare's):
            - Worst Case: theta(N)
            - Best Case: O(logN) (As height in case of equal parts is: O(logN))

      3. Choice of Pivot in Worst case in Quick Sort:

          - Lomuto's partition picks the **Last element** as *pivot*
          - Hoare's partition picks the **First element** as *pivot*
          - So, when given array is already sorted then, Both the Partition algo will goes into the *Worst Case*
          - So, if we are writing the sort function for Standard library then, for the users who give always sorted array as input, our sort function will works slower => this situation is called **Advisory analysis**, as we don't want a situation where our algorithm fails.
          - So, in pratical implementation a  random function is used to generate a random pivot (we already know how to handle the case for random pivot in case of Lomuto and Hoare's partitions)

*/

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
}

// partition function

int naivePartition(int arr[], int low, int high)
{
    int tempArr[high - low + 1], index = 0;

    int pivotIndex = high - 1; // can choose any pivot

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

//----Quick Sort (using Naive partition)-------------------

void quickSort(int arr[], int low, int high)
{

    if (low < high) {
        int pivotIndex = naivePartition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    printArray(arr, n);

    return 0;
}