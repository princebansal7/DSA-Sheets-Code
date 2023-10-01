#include <bits/stdc++.h>
using namespace std;

/*_______Way-1 (Avoid)_________________________

void mergeSorted(int a[], int m, int b[], int n, int ans[]) {
    int i = 0, j = 0;
    int index = 0;
    while (i < n || j < m) {

        if (a[i] <= b[j]) {
            ans[index] = a[i];
            i++;
        }
        else {
            ans[index] = b[j];
            j++;
        }
        index++;
    }
}

*/

//____________WAY-2 (Better)_____________________________

void mergeSorted(int a[], int m, int b[], int n, int ans[])
{
    int i = 0, j = 0;
    int index = 0;
    while (i < m && j < n) {

        if (a[i] < b[j]) {
            ans[index++] = a[i++];
        } else {
            ans[index++] = b[j++];
        }
    }
    while (i < m)
        ans[index++] = a[i++];

    while (j < n)
        ans[index++] = b[j++];
}
int main()
{
    int m, n;
    cin >> m >> n;

    int a[m], b[n], ans[m + n] = { 0 };

    for (int i = 0; i < m; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    mergeSorted(a, m, b, n, ans);

    for (int x : ans)
        cout << x << " ";

    return 0;
}