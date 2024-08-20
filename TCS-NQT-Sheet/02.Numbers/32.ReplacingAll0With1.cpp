#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

/*--------WAY-1---------------------------------

int reverse(int n)
{
    int newNumRev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        newNumRev = newNumRev * 10 + ld;
        n /= 10;
    }
    return newNumRev;
}

int replace1(int n)
{
    if (n == 0)
        return 1;

    int newNum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        if (ld == 0)
        { // Replacing 0's digit with 1
            newNum = newNum * 10 + 1;
        }
        else
        {
            newNum = newNum * 10 + ld;
        }
        n /= 10;
    }
    int FinalnewNum = reverse(newNum);
    return FinalnewNum;
}
------------------------------------------------*/

//---------WAY-2 (Better Way)-----------------------------------

int replace2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = 0, unitPlaces = 1;
    while (n > 0)
    {
        int ld = n % 10;
        if (ld == 0)
        {
            ld = 1;
        }
        ans = unitPlaces * ld + ans;
        n = n / 10;
        unitPlaces = unitPlaces * 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans;

    // ans = replace1(n);
    ans = replace2(n);

    cout << "After replacing: " << ans << nl;
    return 0;
}