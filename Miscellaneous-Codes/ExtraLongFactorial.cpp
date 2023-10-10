#include <iostream>
using namespace std;
#define nl '\n'

#define MAX 5000

int multiply(int x, int res[], int res_size);

void factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is: " << nl;

    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
    cout << nl;
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    // One by one multiply n with individual digits of res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;

        // Store last digit of 'prod' in res[]
        res[i] = prod % 10;

        // Put rest in carry
        carry = prod / 10;
    }

    // Put carry in res and increase result size
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main()
{

    int n;
    cout << "Enter Number: ";
    cin >> n;

    factorial(n);

    return 0;
}