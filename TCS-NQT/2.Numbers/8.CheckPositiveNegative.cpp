#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//-------- WAY-1---------------------------------------

void checkPosNeg1(int n)
{
    if (n > 0)
        cout << n << " is Positive Number" << nl;
    else if (n < 0)
        cout << n << " is Negative Number" << nl;
    else
        cout << "Zero!!" << nl;
}

//--------------WAY-2------------------------------------

void checkPosNeg2(int n)
{
    /*
            As int number is 32 bit, if we right shift number by 31, then:
                - positive number will have only 1 bit which is 0
                - negitive number will have only 1 bit which is 1
    */

    if (n == 0)
    {
        cout << "Zero!!" << nl;
        return;
    }
    if ((n >> 31))
        cout << n << " is Negative Number" << nl;
    else
        cout << n << " is Positive Number" << nl;
}

int main()
{
    int n;
    cin >> n;

    checkPosNeg2(n);

    return 0;
}