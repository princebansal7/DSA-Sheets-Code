#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/* STRONG Number:
        When the sum of factorial of individual digits of a number is equal to the original number
        then number is called a strong number.
        Strong number is also known as Krishnamurthi number/Peterson Number.
        eg: 1, 2, 145, 40585, ...
*/

int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

bool isStrongNum(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += fact(lastDigit);
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
    
    if (isStrongNum(n))
        cout << n << " is Strong number" << nl;
    else
        cout << n << " is not Strong number" << nl;

    return 0;
}