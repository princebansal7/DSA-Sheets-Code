/*
    @author: princebansal_
    Types of Sorting algo [GFG]: https://www.geeksforgeeks.org/classification-of-sorting-algorithms/
*/

#include <iostream>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

// Return minimum index
int minIndex(int arr[], int i, int j)
{
    if (i == j)
        return i;

    // Find minimum of remaining elements
    int k = minIndex(arr, i + 1, j);

    // Return minimum of current and remaining.
    return (arr[i] < arr[k]) ? i : k;
}

// Recursive selection sort. n is size of a[] and index
// is index of starting element.
void selectionSort(int arr[], int n, int index = 0)
{
    // Return when starting and size are same
    if (index == n)
        return;

    // calling minimum index function for minimum index
    int k = minIndex(arr, index, n - 1);

    // Swapping when index and minimum index are not same
    if (k != index)
        swap(arr[k], arr[index]);

    // Recursively calling selection sort function
    selectionSort(arr, n, index + 1);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;

    return 0;
}