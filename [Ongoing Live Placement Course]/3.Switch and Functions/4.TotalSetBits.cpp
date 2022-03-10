#include<iostream>
using namespace std;

int SetBits(int n) {
    int count = 0;
    while (n != 0) {
        int bit = n & 1;
        if (bit == 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int main()
{

    int a, b; cin >> a >> b;

    int totalSetBits = SetBits(a) + SetBits(b);
    cout << "Total set bits in " << a << " and " << b << " are:\n" << totalSetBits;
    return 0;
}