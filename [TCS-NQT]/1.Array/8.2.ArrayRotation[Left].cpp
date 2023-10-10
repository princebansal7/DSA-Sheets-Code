/*
    @author: princebansal_

    Left Rotating Array [Multiple Logics]
*/

#include <iostream>
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

//------WAY-1:  Naive Way TC: O(N*K), SC: O(1)--------------------

void RotateByOne(int arr[], int n) // O(N)
{
    //________way-1__________________

    // for (int i = n - 1; i > 0; i--)
    //     swap(arr[i], arr[0]);

    // /*__________Way-2________________

    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    // */
}

void leftRotateByK1(int arr[], int n, int k) // O(N*k)
{
    for (int i = 1; i <= k; i++) {
        RotateByOne(arr, n);
    }
}

//-----------WAY-2----TC: O(N)+O(N)+O(N) = O(N), SC: O(1) ----------

void reverse(int arr[], int low, int high)
{
    while (low < high)
        swap(arr[low++], arr[high--]);
}

void leftRotateByK2(int arr[], int n, int k)
{
    int size = n;
    int left = 0;
    int right = n - 1;

    if (k > size) // avoding edge case where number of rotation (k) is gretaer than array size
        k = k % size;

    // FOR LEFT ROTATION:-

    // reversing the 'starting' k elements
    reverse(arr, left, k - 1);

    // reversing the remaining elements
    reverse(arr, k, right);

    // reversing the whole array
    reverse(arr, left, right);
}

//-----------WAY-3---TC: O(N), SC: O(N)--------------------

void leftRotateByK3(int arr[], int n, int k)
{

    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[(n - k + i) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // leftRotateByK1(arr, n, k);

    // leftRotateByK2(arr, n, k);

    leftRotateByK3(arr, n, k);

    printArray(arr, n);

    return 0;
}