#include <iostream>
#include <math.h>
using namespace std;
#define nl "\n"
#define ll long long

int octalToDecimal(int n)
{
    int num = 0;
    int place = 0;
    while (n != 0)
    {
        int ld = n % 10;
        num += (ld * pow(8, place));
        n = n / 10;
        place++;
    }
    return num;
}

void decimalToBinary(int n)
{
    bool bits[32] = {0};

    int index = 0;
    while (n)
    {
        bits[index] = n % 2;
        index++;
        n /= 2;
    }
    for (int i = index - 1; i >= 0; i--)
        cout << bits[i];
    cout << nl;

    /*
        int Binary = 0;
        int i = 0;
        while (decimal != 0)
        {
            int rem = decimal % 2;
            Binary += (rem * pow(10, i));
            i++;
            decimal = decimal / 2;
        }
        return Binary;
    */
}

void octalToBinary(int octalNum)
{
    int decimalNum = octalToDecimal(octalNum);

    decimalToBinary(decimalNum);
}

int main()
{
    int n;
    cout << "Enter Octal number (each digits <8): ";
    cin >> n;

    int ans;

    octalToBinary(n);

    return 0;
}