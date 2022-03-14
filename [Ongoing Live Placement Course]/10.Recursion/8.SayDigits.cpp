#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*  when n>0

        I/P: 69
        O/P: Six Nine

        I/P: 7777
        O/P: Seven Seven Seven Seven

*/

void sayDigits(int n, string say[])
{
    if (n == 0)
    {
        // cout << "zero" << nl;
        return;
    }

    int LastDigit = n % 10;
    n = n / 10;

    sayDigits(n, say);

    cout << say[LastDigit] << " ";
}

int main()
{
    int n;
    cin >> n;
    string say[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    sayDigits(n, say);

    cout << nl;
    return 0;
}