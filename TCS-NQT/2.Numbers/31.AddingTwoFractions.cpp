#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/* Approach:

    1.We will maintain num3 and den3 to store answers.
    2.First find gcd of den1 and den2 using euclidean’s algorithm.
      Once we get the gcd we can easily find lcm.lcm(den1,den2) is (den1*den2)/gcd(den1,den2).
    3.Now we will have to change num1 and num2 to num1*(den3/den1) and num2*(den3/den2),since we changed den1 and den2 to lcm.
    4.Now add num1 and num2 and store it in the num3.
    5.Now we have num3 and den3.The answer should be num3/den3,but before printing the answer
      we should convert it into the simplest form.
    6.To convert it into the simplest form, divide numerator and denominator both by
      gcd of numerator and denominator.
    7.Print num3 / den3.
*/

// TC:  O(log(min(den1,den2))) , SC: O(1)

int _gcd(int a, int b)
{
    if (b == 0)
        return a;
    return _gcd(b, a % b);
}

int lcm(int a, int b)
{
    int lcm = a * b / _gcd(a, b);
    return lcm;
}

void simpleForm(int &num3, int &den3)
{
    int gcd = _gcd(num3, den3);
    num3 = num3 / gcd;
    den3 = den3 / gcd;
}

int main()
{
    int num1, num2, den1, den2, num3, den3;
    cout << "Enter numerator1 and denomirator1:" << nl;
    cin >> num1 >> den1;
    cout << "Enter numerator2 and denomirator2:" << nl;
    cin >> num2 >> den2;

    // Finding new fraction:

    den3 = lcm(den1, den2);
    num3 = num1 * (den3 / den1) + num2 * (den3 / den2);

    simpleForm(num3, den3);

    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << num3 << "/" << den3 << nl;

    return 0;
}