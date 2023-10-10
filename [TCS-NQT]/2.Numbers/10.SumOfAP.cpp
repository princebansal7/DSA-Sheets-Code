#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/* AP:
    nth term = a + (n - 1) * d;
    Sum of 1st n terms = n/2[ 2 * a + (n-1) * d ]
                or
                        n/2 (a + l) {l is last term}
*/

// -----------WAY-1--------------------------------------

float SumOfAP1(int n, float a, float d)
{
    float sum = 0;

    /* Way-1 - Understanding:

        for (int i = 1; i <= n; i++)
        {
            int ith_Term = a + (i - 1) * d;
            sum += ith_Term;
        }
    */

    // Way-2
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a = a + d; // next-term
    }
    return sum;
}

// -----------------WAY-2 (using formula) ------------------

float SumOfAP2(int n, float a, float d)
{
    float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    return sum;
}

int main()
{
    int n;
    float a, d;
    cout << "Enter n (number of terms), a (1st term), d (common difference): ";
    cin >> n >> a >> d;

    float ans;

    // ans = SumOfAP1(n, a, d);

    ans = SumOfAP2(n, a, d);

    cout << "Sum is: " << ans << nl;
    return 0;
}