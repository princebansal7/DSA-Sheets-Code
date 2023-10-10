/*
    @author: princebansal_

*/

#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

//----Modifying Array using Hash Set TC: O(n*log(n))+O(n) , SC: O(N)----

int removeDuplicates1(int* arr, int n)
{
    // set stores distinct data in sorted manner (so this works for unsorted array too)

    set<int> st;
    for (int i = 0; i < n; i++) // O(NlogN)
    {
        st.insert(arr[i]);
    }
    int newSize = st.size(); // Getting new size

    // Modifying Array

    int index = 0;
    for (int val : st)
        arr[index++] = val;

    return newSize;
}

//---Brute Force, Using Extra Bool array TC: O(n*n) + O(n) , SC: O(n) + O(n) -------

// NOTE: This approach isn't working for all the cases

void removeDuplicates2(int* arr, int n)
{
    bool check[n] = { true };

    for (int i = 0; i < n; i++) {
        if (check[i] == true) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j])
                    check[j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (check[i] == false)
            cout << arr[i] << " ";
    }
    cout << nl;
}

//----Hashmap Approach TC: O(N)*O(log(N)) or O(N)*O(1)) => O(N), SC: O(N)--------------------------

void removeDuplicates3(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        // Simple checking if whether the value present in hashmap or not:
        //  1. if value is not present => duplicate doesn't exits => print this unique value
        //  2. if value is present => we encountered the duplicate => ignore it.

        if (mp.find(arr[i]) == mp.end()) // find() takes O(logN), O(1) in Average case in unordered_map & takes O(n) in map
        {
            cout << arr[i] << " ";
            mp[arr[i]]++;
        }
    }
    cout << nl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // int size = removeDuplicates1(arr, n); // will give us the size of new modified array
    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << " ";
    // cout << nl;

    // removeDuplicates2(arr, n);

    removeDuplicates3(arr, n);

    return 0;
}