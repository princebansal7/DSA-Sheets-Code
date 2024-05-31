/*
    @author: princebansal_
*/

#include <cmath>
#include <iostream>
using namespace std;
#define nl '\n'

/* Armstrong numbers:

    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084
    548834, 1741725, 4210818, 9800817, 9926315, 24678050, 24678051, 88593477.....

*/

int countDig(int n)
{
    return (int)(log10(n) + 1);
}
bool isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    int dig = countDig(n);
    while (temp) {
        sum = sum + pow(temp % 10, dig);
        temp /= 10;
    }
    if (sum == n)
        return true;
    return false;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    bool ans = isArmstrong(n);

    (ans) ? cout << "Armstrong number" << nl : cout << "Not a Armstrong number" << nl;

    return 0;
}