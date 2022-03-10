#include<bits/stdc++.h>
using namespace std;


void print(int ans[], int n) {
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

void movingZerotoEnd(int a[], int n) {

    int ZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[ZeroIndex]);
            ZeroIndex++;
        }
    }

}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int n;

    cin >> n;

    int a[n];

    for (int i = 0 ; i < n ; i++)
        cin >> a[i];

    movingZerotoEnd(a, n);


    print(a, n);

    return 0;
}