#include<iostream>
using namespace std;

int main()
{
    /*
            12345
             2345
              345
               45
                5
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;


    int i = 1;
    while (i <= n) {

        // spaces

        int space = i - 1;
        while (space) {
            cout << " ";
            space--;
        }

        // numbers

        int j = n - i + 1;
        int num = i;
        while (j) {
            cout << num ;
            j--;
            num++;
        }
        cout << endl;
        i++;
    }

    return 0;
}