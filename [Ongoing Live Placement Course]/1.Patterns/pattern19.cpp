#include<iostream>
using namespace std;

int main()
{

    /*
        E
        D E
        C D E
        B C D E
        A B C D E
    */

    int n; cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;

        // for starting character: 'A' + n - i

        char ch = 'A' + n - i;

        while (j <= i) {

            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}