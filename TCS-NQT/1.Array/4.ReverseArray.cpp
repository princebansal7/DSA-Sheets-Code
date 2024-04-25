#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << nl;
}

// 1. Using Inbuilt Function: TC: O(n), SC: O(1)
void reverseArray1(int arr[], int n)
{
    reverse(arr, arr + n);
}

// 2. Using 2- Pointer approach (Best): TC: O(n), SC: O(1)
void reverseArray2(int arr[], int n)
{
    /*_____ Way-1______________________________

    for (int i = 0, j = n - 1; i < j; i++, j--)
        swap(arr[i], arr[j]);

    ____________________________________________*/

    // Way-2

    int i = 0, j = n - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

// 3. Using  1 pointer approach (Best): TC: O(n), SC: O(1)
void reverseArray3(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - i - 1]);
}

// 4. Using Extra Array => SC: O(n): TC: O(n), SC: O(n)
void reverseArray4(int arr[], int n)
{
    int rArr[n];

    for (int i = n - 1; i >= 0; i--)
        rArr[n - i - 1] = arr[i];

    printArray(rArr, n);
}

// 5. Using Recursion =>  TC: O(n), SC: O(n)
void reverseArray5(int arr[], int n, int start, int end)
{
    if (start < end) {
        swap(arr[start], arr[end]);
        return reverseArray5(arr, n, start + 1, end - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // reverseArray1(arr, n);
    // reverseArray2(arr, n);
    // reverseArray3(arr, n);
    // reverseArray4(arr, n);
    reverseArray5(arr, n, 0, n - 1);

    printArray(arr, n);

    return 0;
}