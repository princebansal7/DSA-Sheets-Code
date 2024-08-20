#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//----------WAY-1---------------------------------------------

void printASCIIofChar1(char ch)
{
    cout << ch << " -> " << (int)ch << nl;
}

// ----------WAY-2-----------------------------------------

void printASCIIofChar2(char ch)
{
    int val = ch;
    cout << ch << " -> " << val << nl;
}

int main()
{
    char ch;
    cin >> ch;

    printASCIIofChar1(ch);
    printASCIIofChar2(ch);

    return 0;
}