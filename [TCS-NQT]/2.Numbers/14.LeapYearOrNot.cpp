#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// Using Macro (Way-2)

#define isLeapYear(y) ((y % 400) == 0) || ((y % 4 == 0) && (y % 100 != 0))

// Way-2--------------------------------

bool isLeap(int n)
{
    if (n % 400 == 0)
        return true;
    else if (n % 4 == 0 and n % 100 != 0)
        return true;
    return false;
}

int main()
{
    int year;
    cin >> year;

    bool ans;

    // ans = isLeap(year);

    ans = isLeapYear(year);

    if (ans)
        cout << year << " => Leap year" << nl;
    else
        cout << year << " => Not a Leap year" << nl;
    return 0;
}