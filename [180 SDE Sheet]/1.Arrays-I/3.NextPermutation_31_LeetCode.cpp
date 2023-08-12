#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void nextPermutation(vector<int>& arr)
{
    int n = arr.size();
    int ind1, ind2;
    for (ind1 = n - 2; ind1 >= 0; ind1--) {
        if (arr[ind1] < arr[ind1 + 1]) {
            break;
        }
    }
    if (ind1 < 0) {
        reverse(arr.begin(), arr.end());
    } else {
        for (ind2 = n - 1; ind2 > ind1; ind2--) {
            if (arr[ind2] > arr[ind1]) {
                break;
            }
        }
        swap(arr[ind1], arr[ind2]);
        int pos = ind1 + 1;
        reverse(arr.begin() + pos, arr.end());
    }
}

/*____Using Inbuilt function______________

void nextPermutation(vector<int> &arr) {
    next_permutation(arr.begin(),arr.end());
}

*/

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    nextPermutation(arr);

    for (int x : arr)
        cout << x << " ";
    cout << nl;

    return 0;
}