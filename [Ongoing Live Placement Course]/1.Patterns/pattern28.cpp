#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    /*____________________________

        1 2 3 4 5 5 4 3 2 1
        1 2 3 4 * * 4 3 2 1
        1 2 3 * * * * 3 2 1
        1 2 * * * * * * 2 1
        1 * * * * * * * * 1
    _______________________________*/

    int n; cin >> n;
    int i, j;
    for (i = 1; i <= n; i++) {
        int val1 = 1;
        for (j = n; j >= i; j--) {
            cout << val1 << " ";
            val1++;
        }
        int star = 0, evenStars = 2 * i - 2;
        while (star != evenStars) {
            cout << "* ";
            star++;
        }
        int val2 = val1 - 1;
        int ite = n - i + 1;
        for (j = 1; j <= ite; j++) {
            cout << val2 << " ";
            val2--;
        }
        cout << nl;
    }
    return 0;
}