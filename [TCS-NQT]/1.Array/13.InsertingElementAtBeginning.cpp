#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

void printArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;
}

int insertAtBeg(int arr[], int n, int val)
{
    cout << "Inserting " << val << " at the beginning:" << nl;
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = val;

    return n + 1;
}

int main()
{
    int n, val;
    cout << "Enter Size and value: ";
    cin >> n >> val;

    cout << "Enter Array Elements: " << nl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int newSize;

    newSize = insertAtBeg(arr, n, val);

    printArray(arr, newSize);

    return 0;
}