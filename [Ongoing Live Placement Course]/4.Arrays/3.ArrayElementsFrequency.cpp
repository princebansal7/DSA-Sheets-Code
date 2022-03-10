#include<iostream>
using namespace std;

void DisplayArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

}

int main()
{
    int a[20] = {0};

    int n; cin >> n;

    int f[5000] = {0};

    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
        f[a[i]]++;
    }


    DisplayArray(f, n);
    return 0;
}