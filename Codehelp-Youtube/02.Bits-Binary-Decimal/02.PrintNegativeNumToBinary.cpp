#include <bitset>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bitset<32> b(n);

    cout << "Binary representation of " << n << " is: ";
    cout << b << endl;
    int positiveNumber = 3;
    int negativeNumber = -16;

    // Represent 3 in 4 bits
    bitset<4> binaryPositive(positiveNumber);
    cout << "Positive 3 in binary: " << binaryPositive << endl;

    // Represent -6 in 4 bits using 2's complement
    bitset<5> binaryNegative(negativeNumber & 0xF); // Ensure only 4 bits are considered
    cout << "Negative -6 in binary (2's complement): " << binaryNegative << std::endl;

    // Brute force approach: Incomplete

    return 0;
}
