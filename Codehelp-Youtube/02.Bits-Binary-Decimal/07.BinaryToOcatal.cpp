#include <cmath>
#include <iostream>

using namespace std;

// Function to convert binary to octal
int binaryToOctal(int binary)
{
    int octal = 0, decimal = 0, octalPlace = 0;

    // Convert binary to decimal
    while (binary > 0) {
        int remainder = binary % 10;
        decimal += remainder * pow(2, octalPlace);
        binary /= 10;
        octalPlace++;
    }

    // Convert decimal to octal
    octalPlace = 1;
    while (decimal > 0) {
        int remainder = decimal % 8;
        octal += remainder * octalPlace;
        decimal /= 8;
        octalPlace *= 10;
    }

    return octal;
}

int main()
{
    int binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int octalNumber = binaryToOctal(binaryNumber);

    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}
