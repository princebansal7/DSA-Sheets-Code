#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

// 1. Brute Force TC:O(N^2), SC: O(1)--------------

void findNonRepeated1(int* arr, int n)
{
    bool ok;
    for (int i = 0; i < n; i++) {
        ok = false;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                ok = true; //=> Not Unique
                break;
            }
        }
        if (ok == false) // Ok still false => never found apne jaisa element => non repeating found
            cout << arr[i] << " ";
    }
    cout << nl;
}

// Sorting Method   TC:O(NlogN)+O(N), SC: O(1)----------------------------------

void findNonRepeated2(int* arr, int n)
{
    sort(arr, arr + n); // O(NlogN)

    // Edge case: Checking for 1st element
    if (arr[0] != arr[1]) {
        cout << arr[0] << " ";
    }

    // checking for all b/w elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }

    // Edge case: Checking for last element
    if (arr[n - 1] != arr[n - 2]) {
        cout << arr[n - 1] << " ";
    }
    cout << nl;
}

// Using Hashmap    TC:O(N), SC: O(N)------------------------------

void findNonRepeated3(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for (auto val : mp) {
        if (val.second == 1)
            cout << val.first << " ";
    }
    cout << nl;
}

// ABOVE All 3 solutions, doesn't maintain the order as in the given array (rest is completely fine)

// To maintain order, use below solutions: (from GFG)

// WAY-1: (Not working, just take the idea)

void findNonRepeated4(int* arr, int n)
{
    vector<int> v;
    int res = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        res ^= arr[i];
    }
    int k = res;
    while (k) {
        if ((k & 1) == 1) {
            break;
        }
        c++;
        k = k >> 1;
    }
    int j = 1 << c;
    int l = res;
    for (int i = 0; i < n; i++) {
        if ((arr[i] & j) == j) {
            l ^= arr[i];
        }
    }
    res ^= l;

    if (res > l) {

        v.push_back(l);
        v.push_back(res);
    } else {
        v.push_back(res);
        v.push_back(l);
    }
    for (int val : v)
        cout << val << " ";
    cout << nl;
}

// WAY-2: (Not working, just take the idea)

void findNonRepeated5(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        auto it = arr[i];
        if (s.find(it) != s.end()) {
            s.erase(it);
        } else {
            s.insert(it);
        }
    }
    int index = 0;
    for (int val : s) {
        arr[index++] = val;
    }
    sort(arr, arr + index);

    for (int i = 0; i < index; i++)
        cout << arr[i] << " ";
    cout << nl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // findNonRepeated1(arr, n);

    // findNonRepeated2(arr, n);

    findNonRepeated3(arr, n);

    //===================================
    // findNonRepeated4(arr, n);

    // findNonRepeated5(arr, n);

    return 0;
}