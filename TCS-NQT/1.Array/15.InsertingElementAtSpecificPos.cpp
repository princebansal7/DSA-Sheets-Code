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

int insertAtSpecPos(int arr[], int n, int val, int pos)
{
    int index = pos - 1;
    if (index > n) {
        cout << "invalid index";
        return -1;
    }
    cout << "Inserting " << val << " at the position " << pos << nl;
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = val;
    return n + 1;
}

int main()
{
    int n, val, pos;
    cout << "Enter Size, value and position: ";
    cin >> n >> val >> pos;

    cout << "Enter Array Elements: " << nl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int newSize;

    newSize = insertAtSpecPos(arr, n, val, pos);

    printArray(arr, newSize);

    return 0;
}