#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

int octalToDecimal(int n)
{
    int num = 0;
    int place = 0;
    while (n != 0)
    {
        int ld = n % 10;
        num += (ld * pow(8, place));
        n = n / 10;
        place++;
    }
    return num;
}

int main()
{
    int n;
    cout << "Enter Octal number (each digits <8): ";
    cin >> n;

    int ans;
    ans = octalToDecimal(n);

    cout << "value is: " << ans << nl;

    return 0;
}