#include<bits/stdc++.h>
using namespace std;


bool CheckSortedRotated(int a[], int n) {

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1])
            count++;
    }

    if (a[n - 1] > a[0])
        count++;

    if (count <= 1) // if sorted-rotated=> either 0 or 1 pair should exist such that: a[i]>a[i+1]
        return true;

    return false;
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;

    int a[n];

    for (int i = 0 ; i < n ; i++)
        cin >> a[i];

    CheckSortedRotated(a, n);

    if (CheckSortedRotated(a, n))
        cout << "true";
    else
        cout << "false";

    return 0;
}