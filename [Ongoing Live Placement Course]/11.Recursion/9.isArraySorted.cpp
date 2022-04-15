#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;

    return isSorted(arr + 1, size - 1);
}

int main()
{
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr, size))
        cout << "Array is Sorted" << nl;
    else
        cout << "Array Not Sorted" << nl;
    return 0;
}