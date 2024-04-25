#include <iostream>
#define nl '\n'
using namespace std;

int hexToDecimal(string hexNumber)
{
    int decimalNumber = 0;
    int base = 1;

    for (int i = hexNumber.length() - 1; i >= 0; i--) {
        char digit = hexNumber[i];
        int digitValue;

        if (digit >= '0' && digit <= '9') {
            digitValue = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            digitValue = 10 + (digit - 'A');
        } else if (digit >= 'a' && digit <= 'f') {
            digitValue = 10 + (digit - 'a');
        } else {
            return -1;
        }

        decimalNumber += digitValue * base;
        base *= 16;
    }

    return decimalNumber;
}

int main()
{
    string hexNumber;

    cout << "Enter a hexadecimal number: ";
    cin >> hexNumber;

    int decimalNumber = hexToDecimal(hexNumber);
    if (decimalNumber != -1)

        cout << "Decimal equivalent: " << decimalNumber << nl;
    else
        cout << "Invalid Hexadecimal number" << nl;

    return 0;
}
