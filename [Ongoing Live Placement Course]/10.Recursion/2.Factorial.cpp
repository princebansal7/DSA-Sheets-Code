#include <iostream>
using namespace std;

int factorial(int val)
{
    if (val == 0)
        return 1;
    return val * factorial(val - 1);
}

int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial is: " << ans << endl;
    return 0;
}