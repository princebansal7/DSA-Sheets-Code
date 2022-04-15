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

void selectionSort(int arr[], int n)
{
    // base case
    if (n == 0 or n == 1)
        return;

    // solve 1 case:

    // Recursive call for remaining part
    selectionSort(arr, n - 1);
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