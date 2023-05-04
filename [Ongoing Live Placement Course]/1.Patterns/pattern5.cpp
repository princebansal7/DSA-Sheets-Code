#include <iostream>
using namespace std;

int main()
{
    /*
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
    */

    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {

        /*-------WAY-1---------------

        int j = n;
        while (j >= 1) {
           cout << j << " ";
           j--;
        }

        */

        // WAY-2----------------

        int j = 1;
        while (j <= n) {
            cout << n - j + 1 << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}