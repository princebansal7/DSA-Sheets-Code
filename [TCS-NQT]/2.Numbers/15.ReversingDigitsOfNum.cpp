
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int reverseNum(int n)
{
    int reversed_num = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reversed_num = reversed_num * 10 + lastDigit;
        n = n / 10;
    }
    return reversed_num;
}

int main()
{
    int n;
    cin >> n;

    cout << "Reverse of " << n << " is: " << reverseNum(n) << nl;

    return 0;
}