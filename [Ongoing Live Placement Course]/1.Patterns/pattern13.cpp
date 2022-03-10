#include<iostream>
using namespace std;

int main()
{
    /*
        A B C D E
        A B C D E
        A B C D E
        A B C D E
        A B C D E
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;


    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            char c = 'A' + j - 1;
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}