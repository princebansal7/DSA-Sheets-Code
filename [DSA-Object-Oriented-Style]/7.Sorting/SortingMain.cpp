
#include "SortingClass.cpp"

int arr[100];

int main()
{

    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // Sorting::BubbleSort(arr, size);
    // Sorting::ModifiedBubbleSort(arr, size);
    // Sorting::selectionSort(arr, size);
    // Sorting::insertionSort(arr, size);
    // Sorting::mergeSort(arr, 0, size - 1);
    Sorting::quickSort(arr, 0, size - 1);

    cout << "After Sorting: " << nl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << nl;
    return 0;
}