/*
    @author: princebansal_

*/

#include <iostream>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long

int arr[50][50];

//---------TC: O(N^2), SC: O(1)---------------------

void symmetricPairs1(int arr[50][50], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][1] == arr[j][0] and arr[j][1] == arr[i][0]) {
                cout << "[" << arr[i][0] << "," << arr[i][1] << "] ";
            }
        }
    }
    cout << nl;
}

//------Using HASHMAP  TC: O(N), O(N)------------------

void symmetricPairs2(int arr[50][50], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int first = arr[i][0];
        int second = arr[i][1];

        // if {second,first} existed previously,print them.

        if (mp.find(second) != mp.end() && mp[second] == first) {
            cout << "[" << first << "," << second << "] ";
        }
        // else store them in the map
        else {
            mp[first] = second;
        }
    }
    cout << nl;
}

int main()
{
    int n;
    cin >> n;
    arr[n][2];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];

    // symmetricPairs1(arr, n);

    symmetricPairs2(arr, n);

    return 0;
}