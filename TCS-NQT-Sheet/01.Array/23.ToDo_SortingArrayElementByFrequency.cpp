/*
    @author: princebansal_

*/

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

/*
    Input: N = 8,
    array[] = {1,2,3,2,4,3,1,2}
    Output: 2 2 2 1 1 3 3 4

    Input: N = 6,
    array[] = {-199,6,7,-199,3,5}
    Output: -199 -199 3 5 6 7

    Explanation: 1st come that element who have more frequency, and if elements have same frequency, then sort according
                 to element's value.
*/

/****         INCOMPLETE              ****/

void sortByFreq1(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (auto val : mp) {
        while (val.second != 0) { // we just printed the hashmap values in sorted manner
            cout << val.first << " ";
            val.second--;
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

    sortByFreq1(arr, n);

    return 0;
}