#include<iostream>
using namespace std;

int main()
{
    /*
        A B C D E
        F G H I J
        K L M N O
        P Q R S T
        U V W X Y
    */
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;

    char ch = 'A';
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}