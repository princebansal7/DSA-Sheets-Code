#include <iostream>
using namespace std;

int main()
{
    /*
        1
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
    */

    int n;
    cin >> n;
    /*-----WAY-1-------------------

    int i = 1;
    while (i <= n) {
        int j = 1;
        int value = i;
        while (j <= i) {
            cout << value << " ";
            value--;
            j++;
        }
        cout << endl;
        i++;
    }

    -------------------------------- */

    // -----WAY-2-------------------

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}