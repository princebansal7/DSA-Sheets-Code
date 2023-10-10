// C++ program to check whether a number can be expressed as a sum of two prime numbers

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

bool SumOfTwoPrimes(int n)
{
    for (int i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (SumOfTwoPrimes(i) == 1)
        {
            if (SumOfTwoPrimes(n - i) == 1)
            {
                cout << n << " can be expressed as the sum of " << i << " and " << n - i << endl;
                flag = 1;
            }
        }
    }

    if (flag == 0)
        cout << n << " cannot be expressed as the sum of two prime numbers\n";
    return 0;
}

// function to check if a number is prime or not
