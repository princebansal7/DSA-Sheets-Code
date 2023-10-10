/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int arr[100];

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
    int pivot = arr[high]; // pivot is always the last element OR can use random(low,right) to generate randomly then swap with last element

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