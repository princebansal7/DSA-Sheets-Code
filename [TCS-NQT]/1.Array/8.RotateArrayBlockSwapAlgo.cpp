#include <iostream>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

//------- (Block Swap Algorithm)----------------------------

void swap(int arr[], int fi, int si, int d)
{
    int i, temp;
    for (i = 0; i < d; i++) {
        temp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i] = temp;
    }
}

// RECURSIVE

void rotateArray(int arr[], int n, int k)
{
    // Left Rotate
    /* Return If number of elements to be rotated
   is zero or equal to array size */
    if (k == 0 || k == n)
        return;
    /* If number of elements to be rotated is more than array size*/
    if (k > n)
        k = k % n;
    /*If number of elements to be rotated
    is exactly half of array size */
    if (n - k == k) {
        swap(arr, 0, n - k, k);
        return;
    }

    /* If A is shorter*/
    if (k < n - k) {
        swap(arr, 0, n - k, k);
        rotateArray(arr, k, n - k);
    } else /* If B is shorter*/
    {
        swap(arr, 0, k, n - k);
        rotateArray(arr + n - k, 2 * k - n, k); /*This is tricky*/
    }
}

/* ITERATIVE

void rotateArray(int arr[], int d, int n)
{
    int i, j;
    if (d == 0 || d == n)
        return;

    // If number of elements to be rotated is more than array size
    if (d > n)
        d = d % n;

    i = d;
    j = n - d;
    while (i != j)
    {
        if (i < j) //A is shorter
        {
            swap(arr, d - i, d + j - i, i);
            j -= i;
        }
        else //B is shorter
        {
            swap(arr, d - i, d, j);
            i -= j;
        }

        // printArray(arr, 7);
    }

    // Finally, block swap A and B
    swap(arr, d - i, d, i);
}

*/

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;

    return 0;
}