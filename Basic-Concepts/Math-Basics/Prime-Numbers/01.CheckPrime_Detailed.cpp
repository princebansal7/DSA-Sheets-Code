#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

//__Way-1.1, TC: O(n)_______________________________________

bool checkPrime1(int n)
{

    // Prime number will have exactly 2 factors

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    return false;
}

//__Way-1.2__TC: O(n)_______________________________________

bool checkPrime2(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

//__Way-2.1, TC: O(sqrt(n) * log(n))_______________________________________

bool checkPrime3(int n)
{

    // Prime number will have exactly 2 factors

    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    { // sqrt() takes O(log(n)) time
        if (n % i == 0)
        {
            count++;

            if ((n / i) != i)
                count++;
        }
    }
    if (count == 2)
        return true;
    return false;
}

//__Way-2.2__TC: O(sqrt(n) * log(n))___________________________________

bool checkPrime4(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    { // sqrt() takes O(log(n)) time
        if (n % i == 0)
            return false;
    }
    return true;
}

/*______________OPTIMAL METHOD__________________________________________________________________*/

//__Way-3.1, TC: O(sqrt(n))_______________________________________

bool checkPrime5(int n)
{

    // Prime number will have exactly 2 factors

    int count = 0;
    for (int i = 1; i * i <= n; i++)
    { // writing i*i <=n instead of i<=sqrt(n) => O(1) operation
        if (n % i == 0)
        {
            count++;

            if ((n / i) != i)
                count++;
        }
    }
    if (count == 2)
        return true;
    return false;
}

//__Way-3.2__TC: O(sqrt(n))_________________________

bool checkPrime6(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    { // writing i*i <=n instead of i<=sqrt(n) => O(1) operation
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    fast_io

        int n;
    cin >> n;

    if (checkPrime5(n))
        cout << "Prime" << nl;
    else
        cout << "Not Prime" << nl;

    return 0;
}