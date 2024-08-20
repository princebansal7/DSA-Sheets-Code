#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

void printArray(int arr[], int start, int end)
{
    cout << "Size is: " << end - start + 1 << nl;
    for (int i = start; i <= end; i++)
        cout << arr[i] << " ";
    cout << nl;
}
bool binaryS(int arr[], int start, int end, int key)
{
    printArray(arr, start, end); // just for understanding, printing the array in which searching happens

    if (start > end) // base case 1: if element not found
        return false;

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) // Base case 2: if element found
        return true;

    else if (arr[mid] < key)
        return binaryS(arr, mid + 1, end, key); // going to right part
    else
        return binaryS(arr, start, mid - 1, key); // going to left part
}

int main()
{
    int size, key;
    // cout << "Enter Size and Key: ";
    cin >> size >> key;
    // cout << "Enter sorted Array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << nl;

    int start = 0;
    int end = size - 1;

    if (binaryS(arr, start, end, key))
        cout << key << " Found!" << nl;
    else
        cout << key << " Not Found!" << nl;

    return 0;
}