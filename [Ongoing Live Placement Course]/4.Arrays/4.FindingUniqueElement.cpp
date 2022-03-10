#include<iostream>
using namespace std;

void DisplayArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

}
int findUnique(int *a, int n)
{
    /*_________WAY-1__________________

    //  This way of storing frequency works only for +ve values,
    //   as -ve index are not valid in array

    int f[3000] = {0};

    for (int i = 0 ; i < n ; i++) {
        f[a[i]]++;
    }
    DisplayArray(f, n);

    for (int i = 0; i < 3000; i++) {
        if (f[i] == 1)
            return i;
    }
    return 0;

    __________________________________*/

    // ___________WAY-2__________________

    int ans = 0;
    for (int i = 0 ; i < n ; i++)
        ans = ans ^ a[i];

    return ans;

}

int main()
{
    int a[20] = {0};

    int n; cin >> n;
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];


    cout << findUnique(a, n);

    return 0;
}