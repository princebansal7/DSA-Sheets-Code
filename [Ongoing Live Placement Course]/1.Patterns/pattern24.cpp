#include<iostream>
using namespace std;

int main()
{
    /*
            1
           22
          333
         4444
        55555
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;


    int i = 1;
    int num = 1;
    while (i <= n) {

        // spaces

        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }

        // numbers

        int j = 1;
        while (j <= i) {
            cout << num ;
            j++;
        }
        num++;
        cout << endl;
        i++;
    }

    return 0;
}