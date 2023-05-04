#include <iostream>
using namespace std;

int main()
{
    /*

            *
           **
          ***
         ****
        *****
    */

    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {

        // Printing spaces
        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }

        // Printing stars at row number of times
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}