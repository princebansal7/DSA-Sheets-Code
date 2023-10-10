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

//----Quick Sort (using Hoare partition)-------------------
// a little diffrent algo then Lomuto

void quickSort(int arr[], int low, int high)
{

    if (low < high) {
        int pivotIndex = hoarePartition(arr, low, high);
        quickSort(arr, low, pivotIndex); // we start from pivotIndex and not from pivotIndex-1 like lomuto
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