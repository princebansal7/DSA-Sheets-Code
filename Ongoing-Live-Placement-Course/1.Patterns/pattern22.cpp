#include <iostream>
using namespace std;

int main()
{
    /*
     *****
     ****
     ***
     **
     *
     */

    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {

        // spaces are 1 less than raw number

        int space = i - 1;
        while (space) {
            cout << " ";
            space--;
        }

        // stars

        int star = n - i + 1;
        // int j = 1;
        while (star) {
            cout << "*";
            star--;
            // j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}