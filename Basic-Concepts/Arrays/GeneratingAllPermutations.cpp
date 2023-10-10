#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;
}

void permutation(int* arr, int start, int end)
{

    if (start == end) {
        print(arr, end + 1);
        return;
    }
    for (int i = start; i <= end; i++) {

        swap(arr[i], arr[start]);

        permutation(arr, start + 1, end);

        swap(arr[i], arr[start]);
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "All Permutations are:" << nl;
    permutation(arr, 0, n - 1);
    return 0;
}