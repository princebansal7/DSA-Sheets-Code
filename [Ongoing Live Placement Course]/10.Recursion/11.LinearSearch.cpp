#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

void printArray(int arr[], int size)
{
    cout << "Size is: " << size << nl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
}
bool linearS(int arr[], int size, int key)
{
    printArray(arr, size);
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    return linearS(arr + 1, size - 1, key);
}

int main()
{
    int size, key;
    cin >> size >> key;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (linearS(arr, size, key))
        cout << key << " Found!" << nl;
    else
        cout << key << " Not Found!" << nl;

    return 0;
}