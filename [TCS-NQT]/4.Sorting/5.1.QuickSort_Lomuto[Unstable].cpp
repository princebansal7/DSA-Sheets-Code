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
    - When stability required merge sort used
*/

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
}

// partition function

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

//----Quick Sort (using Lomuto partition)-------------------

void quickSort(int arr[], int low, int high)
{

    if (low < high) {
        int pivotIndex = lomutoPartition(arr, low, high);
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