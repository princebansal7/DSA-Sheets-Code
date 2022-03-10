#include<iostream>
using namespace std;

void RotateByOne(int a[], int n)
{
    //________way-1________________________

    for (int i = 0; i < n - 1; i++)
        swap(a[i], a[n - 1]);


    /*__________Way-2_________________________

       int temp = a[n - 1];
       for (int i = n - 1; i > 0; i--) {
           a[i] = a[i - 1];
       }
       a[0] = temp;
     ____________________________________*/
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n ;
    int a[50];

    for (int i = 0; i < n; ++i)
        cin >> a[i];


    RotateByOne(a, n);

    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

    return 0;
}