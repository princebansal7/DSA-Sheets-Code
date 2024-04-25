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

void bubbleSort(int arr[], int n)
{
    // base case
    if (n <= 1)
        return;

    // solve 1 case: put largest element to end
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    // Recursive call for remaining part
    bubbleSort(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;

    return 0;
}