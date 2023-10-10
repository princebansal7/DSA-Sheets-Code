#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void reverse(int arr[], int s, int e)
{
    while (s < e) {
        swap(arr[s++], arr[e--]);
    }
}

void rotateRight(int arr[], int n, int k)
{

    //----Logic-1---------------

    // while (k--) {
    // 	int temp = arr[n - 1];
    // 	for (int i = n - 1; i >= 0; i--) {
    // 		arr[i] = arr[i - 1];
    // 	}
    // 	arr[0] = temp;
    // }

    //----Logic-2---------------

    // int temp[n];
    // for (int i = 0; i < n; i++) {
    // 	temp[(k + i) % n] = arr[i];
    // }

    // for (int x : temp) cout << x << " ";
    // cout << endl;

    //----Logic-3---------------

    if (k > n)
        k = k % n;

    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - k - 1);
    reverse(arr, 0, n - 1);
}

void rotateLeft(int arr[], int n, int k)
{

    //----Logic-1---------------

    // while (k--) {
    // 	int temp = arr[0];
    // 	for (int i = 1; i < n; i++) {
    // 		arr[i - 1] = arr[i];
    // 	}
    // 	arr[n - 1] = temp;
    // }

    //----Logic-2---------------

    // int temp[n];
    // for (int i = 0; i < n; i++) {
    // 	temp[(n - k + i) % n] = arr[i];
    // }

    // for (int x : temp) cout << x << " ";
    // cout << endl;

    //----Logic-3---------------

    if (k > n)
        k = k % n;

    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int k = 3;

    rotateRight(arr, 10, k);

    // rotateLeft(arr, 10, k);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}