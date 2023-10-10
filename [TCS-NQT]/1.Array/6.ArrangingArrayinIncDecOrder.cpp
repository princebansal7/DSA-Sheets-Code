#include <algorithm>
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

void arrangeInIncDecOrder(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i <= n / 2 - 1; i++) {
        cout << arr[i] << " ";
    }
    for (int i = n - 1; i >= n / 2; i--) {
        cout << arr[i] << " ";
    }
    cout << nl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    arrangeInIncDecOrder(arr, n);

    return 0;
}