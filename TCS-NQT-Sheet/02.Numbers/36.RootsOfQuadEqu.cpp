#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int a, b, c;
    cout << "Enter value of a, b and c: " << nl;
    cin >> a >> b >> c;

    double root1, root2;
    double D = b * b - 4 * a * c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / 2 * a;
        root2 = (-b - sqrt(D)) / 2 * a;
        cout << "Roots are Real and Distinct: " << root1 << " " << root2 << nl;
    }
    else if (D == 0)
    {
        root1 = root2 = -b / 2 * a;
        cout << "Roots are Equal: " << root1 << " " << root2 << nl;
    }
    else
    {
        cout << "Imaginary Roots i.e, Complex Roots: " << nl;
        cout << -b / 2 * a << " + " << sqrt(abs(D)) << " i" << nl;
        cout << -b / 2 * a << " - " << sqrt(abs(D)) << " i" << nl;
    }

    return 0;
}