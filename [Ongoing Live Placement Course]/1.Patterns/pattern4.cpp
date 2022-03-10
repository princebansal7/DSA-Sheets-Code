#include<iostream>
using namespace std;

int main()
{
    /*
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}