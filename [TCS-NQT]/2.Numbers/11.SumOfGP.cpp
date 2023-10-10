#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

/* GP:
    nth term = Tn = a * r^ (n-1);
    Sum of 1st n terms = a * (r^n - 1) / r - 1
*/

// -----------WAY-1--------------------------------------

float SumOfGP1(int n, float a, float r)
{
    float sum = 0;

    // Way-1 - Understanding:

    for (int i = 1; i <= n; i++)
    {
        int ith_Term = a * pow(r, i - 1);
        sum += ith_Term;
    }

    /*            Way-2

        for (int i = 1; i <= n; i++)
        {
            sum += a;
            a = a * r; // next-term
        }
    */
    return sum;
}

// -----------------WAY-2 (using formula) ------------------

float SumOfGP2(int n, float a, float r)
{
    float sum = 0;
    if (r > 1)
        sum = (a * (pow(r, n) - 1)) / (r - 1);
    else if (r >= 0 and r < 1)
        sum = (a * (1 - pow(r, n))) / (1 - r);
    else
    {
        cout << "r (common ratio can't be 1)=> INVALID ";
        return -1;
    }
    return sum;
}

int main()
{
    int n;
    float a, r;
    cout << "Enter n (number of terms), a (1st term), r (common ratio): ";
    cin >> n >> a >> r;

    float ans;

    ans = SumOfGP1(n, a, r);

    // ans = SumOfGP2(n, a, r);

    cout << "Sum is: " << ans << nl;
    return 0;
}