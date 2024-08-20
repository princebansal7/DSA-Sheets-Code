/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// GCF or HCF (greatest commin factor or Highest common multiple)
// TC: O(min(a,b))

// Better complexity when numbers are co prime => have gcd 1
int gcd1(int a, int b)
{
    int gcd = 1;
    int res = a < b ? a : b;
    for (int i = 1; i <= res; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

// better complexity when one number is factor of another
int gcd2(int a, int b)
{
    int gcd = 1;
    int res = a < b ? a : b;
    for (int i = res; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }
    return gcd;
}

/* Euclidean Algo:
    gcd(a,b) = gcd(a-b,b) , a>b

    when one of the a or b becomes , another one is gcd
    e.g: gcd(20,15) ?
         gcd(15,20) = gcd(5,15) = gcd(10,5) = gcd(5,5) = gcd(0,5) => gcd is 5
                      20-15,20       15-5,5      5-5,5
    But subtraction takes extra iteration so.. what if we divide so, those steps will be equal to remainder =>

                gcd(a,b) = gcd(a%b,b) , a>b =>     gcd(greater % samller, smaller) => untill one of them is 0
*/

// TC O(log(min(a,b)))

int gcdEuclidean(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

// LCM (least common factor)

int lcm1(int a, int b)
{
    int lcm = 1;
    int val = a > b ? a : b;
    for (int i = val; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    return lcm;
}

int lcm2(int a, int b)
{
    return (a * b) / gcdEuclidean(a, b);
}

int main()
{
    int a, b, gcdAns, lcmAns;
    cout << "Enter a & b: ";
    cin >> a >> b;

    cout << "GCD(" << a << "," << b << ") = " << gcd1(a, b) << nl;
    cout << "LCM(" << a << "," << b << ") = " << lcm1(a, b) << nl << nl;

    cout << "GCD(" << a << "," << b << ") = " << gcdEuclidean(a, b) << nl;
    cout << "LCM(" << a << "," << b << ") = " << lcm2(a, b) << nl;

    return 0;
}