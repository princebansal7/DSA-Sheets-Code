#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    string bits;
    cin >> bits;

    int ans = 0;
    for (int i = 0; i < bits.length(); i++) {

        ans = ans * 2 + (bits[i] - '0');
    }

    cout << bits << " -> " << ans << endl;

    /* Enter Bit pattern as number
        int n; cin >> n;
        int temp = n;
        int ans = 0;
        int i = 0;
        ----------WAY-1--------------------
           while (n != 0) {
               int bit = n & 1;
               if (bit == 1) {
                   ans = ans + pow(2, i);
               }
               i++;
               n = n / 10;
           }
           cout << temp << " -> " << ans;

        --------------------------------------

        ------------WAY-2------------------
        while (n != 0) {
            int ld = n % 10;
            if (ld == 1) {
                ans = ans + pow(2, i);
            }
            i++;
            n = n / 10;
        }
        cout << temp << " -> " << ans;
       _____________________________________*/

    return 0;
}