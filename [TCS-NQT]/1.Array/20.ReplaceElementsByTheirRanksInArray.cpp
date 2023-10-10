/*
    @author: princebansal_

*/

#include <algorithm>
#include <iostream>
#include <map>
#include <set>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

/*
    Input: 20 15 26 2 98 6
    Output: 4 3 5 1 6 2
    Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,
                 rank of 15 is 3 and so on..
*/

// MY Brute Force solution [Works correctly only when all the array elements are distinct]

void replacingWithRanks1(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];
    sort(temp, temp + n);

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(temp[i]) == mp.end())
            mp[temp[i]] = i + 1;
    }

    // for (auto val : mp)
    // {
    //     cout << val.first << " " << val.second << nl;
    // }
    for (int i = 0; i < n; i++) {
        if (mp.find(arr[i]) != mp.end()) {
            temp[i] = mp[arr[i]];
        }
    }
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    cout << nl;
}

// WAY-1: Basic naive way , TC: O(N^2),SC: O(N)----------

void replaceWithRanks2(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        set<int> s;

        // We are calculating ranks of elements by checking => vo kitno se bda hai,
        //    => jitno sey bhi bda hai, unhe set me dalo  aur set ka size+1 will be rank of that element

        for (int j = 0; j < n; j++) {
            if (arr[i] > arr[j])
                s.insert(arr[j]);
        }
        cout << s.size() + 1 << " ";
    }
    cout << nl;
}

// WAY-2: Optimised (My Way was correct, I just Implemented poorly)

// TC: O(N)+O(N.logN)+O(N)+O(N) => O(N.logN)
// SC: O(N)+O(N) = O(N)

void replaceWithRanks3(int arr[], int n)
{
    int temp[n];

    for (int i = 0; i < n; i++)
        temp[i] = arr[i];

    sort(temp, temp + n);

    int rank = 1;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp[temp[i]] == 0) // if element count = 0 => it was not present in map prevesiouly
        {
            mp[temp[i]] = rank;
            rank++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << mp[arr[i]] << " ";
    cout << nl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // replacingWithRanks1(arr, n); // Not fully correct

    // replaceWithRanks2(arr, n);

    replaceWithRanks3(arr, n);

    return 0;
}