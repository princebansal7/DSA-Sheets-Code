/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Naive solution: TC: O(n), SC: O(n)
void removeDuplicates1(int* arr, int n)
{
    int temp[n];
    temp[0] = arr[0];
    int newSize = 1;
    for (int i = 1; i < n; i++) {
        if (temp[newSize - 1] != arr[i]) {
            temp[newSize] = arr[i];
            newSize++;
        }
    }
    for (int i = 0; i < newSize; i++) {
        cout << temp[i] << " ";
    }
    cout << nl;
}

// Efficient Solution: O(n), SC: O(1)
void removeDuplicates2(int* arr, int n)
{
    int newSize = 1;
    for (int i = 1; i < n; i++) {
        if (arr[newSize - 1] != arr[i]) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << nl;
}

int main()
{
    int arr[] = { 10, 10, 20, 20, 20, 30, 30, 30, 69, 69, 69 };
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates1(arr, size);

    return 0;
}