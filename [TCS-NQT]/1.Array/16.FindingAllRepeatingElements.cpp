#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

// 1. Brute Force TC:O(N^2), SC: O(N)--------------

void findRepeated1(int* arr, int n)
{
    int same[n];
    int index = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                same[index] = arr[i];
                index++;
            }
        }
    }

    for (int i = 0; i < index; i++) {
        if (same[i] != same[i + 1])
            cout << same[i] << " ";
    }
    cout << nl;
}

// 2. Sorting Approach TC:O(N^2), SC: O(N)--------------

// Will Not work for all Cases
void findRepeated2(int* arr, int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1])
            cout << arr[i] << " ";
    }
    cout << nl;
}

// 3.---Using Hashmap TC:O(N), SC(N)---------------

void findRepeated3(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for (auto val : mp) {
        if (val.second > 1)
            cout << val.first << " ";
    }
    cout << nl;
}

// 4.--- [Best approach] TC:O(N), SC(1)---------------

void findRepeated4(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[arr[i] % n] = arr[arr[i] % n] + n;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= n * 2)
            cout << i << " ";
    }
    cout << nl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // findRepeated1(arr, n);

    // findRepeated2(arr, n);

    // findRepeated3(arr, n);

    findRepeated4(arr, n);

    return 0;
}