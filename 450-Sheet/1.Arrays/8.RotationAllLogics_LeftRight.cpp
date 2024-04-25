#include <bits/stdc++.h>
using namespace std;

/*________WAY-1___________________________________


void reverse(vector<int>& a, int low, int high) {
    while (low < high) {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}

void rotate(vector<int>& a, int n, int k) {
    int left = 0;
    int size = n;
    int right = n - 1;

    if (k > size)
        k = k % size;

    // for right rotation

    reverse(a, size - k, right);
    reverse(a, left, size - k - 1);
    reverse(a, left, right);

    // for left rotation

    // reverse(a,left,k-1);
    // reverse(a,k,right);
    // reverse(a,left,right);


}
_________________________________________________*/

/*__________________WAY-2 (TC: O(n), SC: O(n))_________________________*/

void rotate(vector<int>& a, int n, int k)
{

    vector<int> temp(n);

    // Rotating right by k places (clockwise)

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = a[i];
    }
    a = temp;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int k;
    cin >> k;

    rotate(a, n, k);

    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

    return 0;
}