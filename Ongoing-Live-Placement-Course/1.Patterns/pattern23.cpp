#include <iostream>
using namespace std;

int main()
{

    /*
        11111
         2222
          333
           44
            5
    */

    int n;
    cin >> n;

    int i = 1;
    int num = 1;
    while (i <= n) {

        // spaces are 1 less than raw number

        int space = i - 1;
        while (space) {
            cout << " ";
            space--;
        }

        // numbers

        int j = n - i + 1;
        while (j) {
            cout << num;
            j--;
        }
        num++;
        cout << endl;
        i++;
    }

    return 0;
}