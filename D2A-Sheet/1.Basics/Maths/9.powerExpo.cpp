/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// power exponentiation: pow(a,b) => a raise to power b
// both a, b are integers and +ve

// Naive solution
// TC: O(b) or O(n) => n is power
int pow1(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
        ans *= a;
    return ans;
}

/*    optimal solution

        TC: O(log2(n)) => n is power
        eg: pow(3,8) => initially ans = 1, n = 8, x = 3
        3 ^ 8 = > power even => we can write it as:  (3 ^ 2) ^ 4 ( => x * x and n / 2)
                                                      9 ^ 4                             =>  x = 3*3 = 9, n = 8/2 = 4, ans = 1
        9 ^ 4 => power even => (9 ^ 2) ^ 2  =>       81 ^ 2                             =>  x = 9*9 = 81, n = 4/2 = 2, ans = 1
        81 ^ 2 => power even => (81 ^ 2) ^ 1 =>     6561 ^ 1                            =>  x = 81*81 = 6561, n = 2/2 = 1, ans = 1
       6561 ^ 1 => power odd => power - 1 and take number out => 6561 * (6561)^ 0       =>  x = 6561, n = 1-1 = 0, and
                                                                                                        ans = 1 * 6561
*/

int pow2(int x, int n)
{
    int ans = 1;
    while (n > 0) {
        if (n & 1) {
            n -= 1;
            ans = ans * x;
        } else {
            n = n / 2;
            x = x * x;
        }
    }
    return ans;
}

// for -ve exponent => pow(5,-2) => 5 ^ -2 => 1 / (5^2) => 1 / 25

double pow3(int x, int n)
{
    double ans = 1;
    int tempExpo = n;
    if (n < 0)
        n = -n;
    while (n > 0) {
        if (n & 1) {
            n -= 1;
            ans = ans * x;
        } else {
            n = n / 2;
            x = x * x;
        }
    }
    if (tempExpo < 0)
        return (1.0 / ans);
    return ans;
}

// if exponent is decimal value - below sol won't work

// double pow4(int x, double n)
// {
//     double ans = 1;
//     int tempExpo = n;
//     n = -n;
//     while (n > 0) {
//         if (n % 2 == 1) {
//             n -= 1;
//             ans = ans * x;
//         } else {
//             n = n / 2;
//             x = x * x;
//         }
//     }
//     if (tempExpo < 0)
//         return (1.0 / ans);
//     return ans;
// }

int main()
{
    int x, n;
    cout << "Enter x and n: ";
    cin >> x >> n;

    cout << nl;
    cout << "pow(" << x << "," << n << ") = " << pow1(x, n) << nl;
    cout << "pow(" << x << "," << n << ") = " << pow2(x, n) << nl;
    cout << "pow(" << x << "," << n << ") = " << pow3(x, n) << nl;
    return 0;
}