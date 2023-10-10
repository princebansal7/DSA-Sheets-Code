
#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

/*
    What are Armstrong Numbers?

    Armstrong Numbers are the numbers having the sum of digits raised to power
    no. of digits is equal to a given number.

    Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.

*/
int countDigits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
bool isArmstrongNum(int n)
{
    int digitCount = countDigits(n);
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum += pow(ld, digitCount);
        n = n / 10;
    }
    if (temp == sum)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    if (isArmstrongNum(n))
        cout << "Armstrong Number" << nl;
    else
        cout << "Not Armstrong Number" << nl;

    return 0;
}